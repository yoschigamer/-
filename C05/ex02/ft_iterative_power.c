/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 06:49:21 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/17 15:19:42 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	int nb;
	int power;

	nb = 20;
	power = 15;

	printf("%d", ft_iterative_power(nb, power));
	return 0;
}*/

int	ft_iterative_power(int nb, int power)
{
	int	multiplier;

	multiplier = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (1 < power)
	{
		multiplier *= nb;
		power--;
	}
	return (multiplier);
}
