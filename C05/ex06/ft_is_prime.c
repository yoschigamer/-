/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 07:28:24 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/17 18:50:47 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	int nb = 11;
	printf("%d", ft_is_prime(2000000011));
	return (0);
}*/

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}
