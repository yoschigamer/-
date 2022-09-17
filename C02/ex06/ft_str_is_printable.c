/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 03:10:01 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/13 14:34:47 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
char str[] = "\0";
printf("%d", ft_str_is_printable(str));
return 0;
}
*/
int	ft_str_is_printable(char	*str)
{
	unsigned char	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
