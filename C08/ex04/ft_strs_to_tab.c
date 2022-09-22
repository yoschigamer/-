/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 20:09:30 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/22 16:07:51 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
int					ft_size(char *str);
char				*ft_copy(char *str);

// int main(int argc, char **argv)
// {
// 	ft_strs_to_tab(argc, argv);
// 	return 0;
// }

int	ft_size(char *str)
{
	int	i;
+
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_copy(char *str)
{
	int		i;
	int		lenght;
	char	*strcopy;

	lenght = 0;
	while (str[lenght])
		lenght++;
	strcopy = malloc(sizeof(str) * (lenght + 1));
	i = 0;
	if (strcopy == NULL)
		return (NULL);
	else
	{
		while (str[i])
		{
			strcopy[i] = str[i];
			i++;
		}
		strcopy[i] = '\0';
		return (strcopy);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*mastruct;
	int			i;

	i = 0;
	mastruct = malloc(sizeof(t_stock_str) * (ac + 1));
	if (mastruct == NULL)
		return (NULL);
	else
	{
		while (i < ac)
		{
			mastruct[i].str = av[i];
			mastruct[i].size = ft_size(av[i]);
			mastruct[i].copy = ft_copy(av[i]);
			i++;
		}
		mastruct[i].str = 0;
	}
	return (mastruct);
}
