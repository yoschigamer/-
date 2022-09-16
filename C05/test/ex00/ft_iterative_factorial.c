/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 05:32:49 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/15 23:51:55 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(void)
{
	int nb;
	nb = 12;

	printf("%d", ft_iterative_factorial(nb));
	return 0;
}*/

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			result = result * i;
			i++;
		}
		return (result);
	}
	else
		return (0);
}
