/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:33:40 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/04 07:36:07 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	affiche(char a, char b, char c, char d)
{
	if ((a <= c && b < d) || (a < c))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if (!(a == '9' && b == '8'))
		{
			write(1, ", ", 2);
		}
		else
			write(1, "\n", 1);
	}
}

void	operator(char e, char f, char g, char h)
{
	e = '0';
	while (e <= '9')
	{
		f = '0';
		while (f <= '9')
		{
			g = '0';
			while (g <= '9')
			{
				h = '0';
				while (h <= '9')
				{
					affiche(e, f, g, h);
					h++;
				}
				g++;
			}
			f++;
		}
		e++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	operator(a, b, c, d);
}