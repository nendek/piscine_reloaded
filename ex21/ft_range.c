/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:09:25 by pnardozi          #+#    #+#             */
/*   Updated: 2017/11/07 10:09:47 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *range;

	i = 0;
	if (min >= max)
		return (0);
	range = (int*)malloc(sizeof(*range) * (max - min));
	if (range == NULL)
		return (NULL);
	while ((i + min) < max)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
