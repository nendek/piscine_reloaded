/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:07:46 by pnardozi          #+#    #+#             */
/*   Updated: 2017/11/07 11:34:31 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int		i;
	char				c;
	int					dif;

	i = 0;
	dif = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	c = s2[i];
	if (s1[i] > c)
		while (s1[i] != c)
		{
			c++;
			dif++;
		}
	else
		while (s1[i] != c)
		{
			c--;
			dif--;
		}
	return (dif);
}

void	ft_sort_params(int nb, char **s)
{
	int		i;
	char	*buffer;
	int		j;

	j = 0;
	i = 0;
	while (i < nb)
	{
		while (j < nb)
		{
			if (ft_strcmp(s[i], s[j]) <= 0)
			{
				buffer = s[i];
				s[i] = s[j];
				s[j] = buffer;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
