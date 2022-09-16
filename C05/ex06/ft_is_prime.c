/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 07:28:24 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/15 23:55:15 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	int nb = 67;
	printf("%d", ft_is_prime(nb));
	return (0);
}*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (nb % i / 2)
	{
		if (nb % i == nb)
			return (0);
		i++;
	}
	return (1);
}
