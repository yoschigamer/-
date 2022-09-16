/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 07:37:57 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/15 23:50:16 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(int argc, char const *argv[])
{
	int index = 9;

	printf("%d", ft_fibonacci(index));
	return (0);
}*/

int	ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (i < index)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}
