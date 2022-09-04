/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgaspard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:37:02 by tgaspard          #+#    #+#             */
/*   Updated: 2022/09/01 20:56:54 by tgaspard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(char a1, char a2, char a3)
{
	if (!(a1 == a2 || a2 == a3 || a1 == a3))
	{	
		write(1, &a1, 1);
		write(1, &a2, 1);
		write(1, &a3, 1);
		if (!(a1 == '7' && a2 == '8' && a3 == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	a1;
	char	a2;
	char	a3;

	a1 = '0';
	while (a1 <= '7')
	{
		a2 = a1 + 1;
		while (a2 <= '8')
		{
			a3 = a2 + 1;
			while (a3 <= '9')
			{
				display(a1, a2, a3);
				a3++;
			}
		a2++;
		}
	a1++;
	}	
}
