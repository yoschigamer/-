/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:09:31 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/15 18:20:18 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
    int min, max;
    min = 10;
    max = 20;
    
    ft_range(min, max);
    return (0);
}

int *ft_range(int min, int max)
{
    int i;
    int *testMaloc;

    i = min;
    testMaloc = (int*)malloc(sizeof(max - min + 1) * ( + 1));

    while (i < (max - min))
    {
        printf("%d", i);
        i++;
    }
    return (0);
}