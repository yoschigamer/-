/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 05:55:49 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/15 23:52:43 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
int nb;
nb = 5;

printf("%d", ft_recursive_factorial(nb));
return 0;
}*/

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb >= 0)
	{
		if (nb > 0)
			return (nb * ft_recursive_factorial(nb - 1));
		else
			return (1);
	}
	else
		return (0);
}
