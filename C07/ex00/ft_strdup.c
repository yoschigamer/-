/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:43:13 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/15 13:54:36 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
    char src[] = "hello2";

    printf("%s", ft_strdup(src));
    return 0;
}

char	*ft_strdup(char *src)
{
    int lenght = 0;
    char *testMaloc;

    while (src[lenght])
        lenght++;
    testMaloc = (char*)malloc(sizeof(*src) * (lenght + 1));
    int i = 0;
    while (src[i] != '\0')
    {
        testMaloc[i] = src[i];
        i++;
    }
    return (testMaloc);
}

/*
char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}*/