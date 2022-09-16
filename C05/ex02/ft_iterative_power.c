/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 06:49:21 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/15 23:53:54 by kschneid         ###   ########.fr       */
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
	int	i;

	i = 0;
	multiplier = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 && nb < 0)
	{
		if (nb < 0)
			return (-1);
		else
			return (1);
	}
	while (i < power)
	{
		multiplier *= nb;
		i++;
	}
	return (multiplier);
}
