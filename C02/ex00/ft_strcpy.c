/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschneid <kschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:04:23 by kschneid          #+#    #+#             */
/*   Updated: 2022/09/12 14:32:22 by kschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
   int main(void)
   {
   char dest[] = "";
   char src[] = "je suis une chaine de characters";
   printf("%s \n", src);
   printf("%s \n", dest);

   ft_strcpy(dest, src);
   printf("%s \n", src);
   printf("%s \n", dest);

   return 0;
   }

*/
