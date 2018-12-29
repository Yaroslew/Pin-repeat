/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 19:33:06 by pcorlys-          #+#    #+#             */
/*   Updated: 2018/12/08 19:17:00 by pcorlys-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int q;
	int c;

	q = 0;
	c = 1;
	if (argc < 2)
		return (0);
	while (c != argc)
	{
		while (argv[c][q])
		{
			ft_putchar(argv[c][q]);
			q++;
		}
		ft_putchar('\n');
		q = 0;
		c++;
	}
}
