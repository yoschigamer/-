/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:47:12 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/15 00:31:32 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	unsigned int n;
	char s1[] = "bqTrcyutc";
	char s2[] = "tqTrcyutc";

	n = 2;

	printf("%d", ft_strncmp(s1, s2, n));
	return 0;
}

int	ft_strncmp(char *str, char *dest, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str[i] == dest[i] && str[i] != '\0' && dest[i] != '\0' && i < n - 1)
		i++;
	return (str[i] - dest[i]);
}
