/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:07:43 by kschneid          #+#    #+#             */
/*   Updated: 2022/08/31 17:10:33 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void    putchar(char c)
{
    write(1, &c, 1);
}
void ft_print_comb()
{
    char a, b ,c;
    a = '0';
    b = '1';
    c = '2';
    while (a <= '7')
    {
        while (b <= '8')
        {
            while (c <= '9')
            {
                putchar(a);
                putchar(b);
                putchar(c);
                putchar(' ');
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a;
    }
}
int main()
{
    ft_print_comb();
}
