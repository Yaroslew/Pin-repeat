/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 05:29:08 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/04 06:31:10 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		put_str(char *s1)
{
	int		q;

	q = 0;
	while (s1[q])
	{
		ft_putchar(s1[q]);
		q++;
	}
	ft_putchar('\n');
}

int			check(char *s1, char *s2)
{
	int		q;

	q = 0;
	while (s1[q] == s2[q])
		q++;
	return (s1[q] - s2[q]);
}

void		prin(char **argv, int argc)
{
	int q;

	q = 1;
	while (q != argc)
	{
		put_str(argv[q]);
		q++;
	}
}

int			main(int argc, char **argv)
{
	int		q;
	char	*save;
	int		count;

	count = 1;
	if (argc <= 1)
		return (0);
	while (count != 0)
	{
		count = 0;
		q = 1;
		while (q != argc - 1)
		{
			if (check(argv[q], argv[q + 1]) > 0)
			{
				save = argv[q];
				argv[q] = argv[q + 1];
				argv[q + 1] = save;
				count++;
			}
			q++;
		}
	}
	prin(argv, argc);
}
