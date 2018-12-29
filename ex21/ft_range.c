/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 06:56:35 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/04 07:51:22 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *res;
	int diff;
	int q;

	res = NULL;
	if (min >= max)
		return (res);
	q = 0;
	diff = max - min;
	res = malloc(sizeof(int) * diff);
	if (res == NULL)
		return (res);
	while (q != diff)
	{
		res[q] = min + q;
		q++;
	}
	return (res);
}
