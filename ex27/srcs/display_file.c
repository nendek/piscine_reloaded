/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:16:36 by pnardozi          #+#    #+#             */
/*   Updated: 2017/11/07 10:17:42 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_display(char *str)
{
	char	lecture[1];
	int		fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (1);
	while (read(fd, lecture, 1))
	{
		ft_putchar(lecture[0]);
	}
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	if (ft_display(argv[1]) == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	return (0);
}
