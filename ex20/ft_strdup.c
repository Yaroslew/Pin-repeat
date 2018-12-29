/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 06:35:00 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/08 20:16:39 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		q;
	int		count;
	char	*res;

	q = 0;
	count = 0;
	while (src[count])
		count++;
	res = (char*)malloc(sizeof(*res) * (count + 1));
	if (res == NULL)
		return (NULL);
	while (q != count)
	{
		res[q] = src[q];
		q++;
	}
	res[q] = '\0';
	return (res);
}
