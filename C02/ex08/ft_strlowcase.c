/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 03:42:22 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/12 14:22:38 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
   char *ft_strlowcase(char *str);

   int main(void)
   {
   char str[] = "Ceci Est Un Test";
   printf("%s", ft_strlowcase(str));
   return 0;
   OK
   }
   */
char	*ft_strlowcase(char	*str)
{
	unsigned char	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
