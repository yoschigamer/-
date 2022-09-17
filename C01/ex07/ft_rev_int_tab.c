/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:50:19 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/09 13:50:24 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{	
	int	x;
	int	swap;

	x = 0;
	while (x < size / 2)
	{
		swap = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = swap;
		x++;
	}
}
