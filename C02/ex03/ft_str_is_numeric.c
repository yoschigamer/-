/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:25:56 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/13 14:33:41 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
char str[] = "";

printf("%d", ft_str_is_numeric(str));

return 0;
}*/
int	ft_str_is_numeric(char *str)
{
	unsigned char	i;

	i = 0;
	if (str[0] == 0)
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
