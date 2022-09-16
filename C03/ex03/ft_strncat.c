/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:26:53 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/13 14:52:16 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char src[] = "hello";
	char dest[] = "hello";
	int nb;

	nb = 3;
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	ie;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	ie = 0;
	while (src[ie] != '\0' && ie < nb)
	{
		dest[i] = src[ie];
		i++;
		ie++;
	}
	dest[i] = '\0';
	return (dest);
}
