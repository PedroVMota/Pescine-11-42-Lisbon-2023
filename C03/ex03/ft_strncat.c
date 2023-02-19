/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:51:28 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/05 17:29:25 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
		i1++;
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}
/*
int	main(void)
{
	int 	nb;
	char	*src;
	char	*dest;
	char	*ft_src;
	char	*ft_dest;
	char	*buff;
	char	*ft_buff;

	src = calloc(7, sizeof(char));
	dest = calloc(12, sizeof(char));
	ft_src = calloc(12, sizeof(char));
	ft_dest = calloc(12, sizeof(char));
	strcpy(src, "galera");
	strcpy(ft_src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_dest, "alo ");
	nb = 13;
	buff = strncat(dest, src, nb);
	ft_buff = ft_strncat(ft_dest, ft_src, nb);
	if (ft_dest != ft_buff)
		printf("[1] KO, return value from ft_strncat is different");
	else if (strcmp(buff, ft_buff) != 0)
	{
		printf("[1] KO, strcmp between ft_dest and dest is different");
		return (1);
	}
	else
		printf("[1] OK, nb = %02d, result=%s\n", nb, ft_buff);
	nb = 4;
	strcpy(src, "galera");
	strcpy(ft_src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_dest, "alo ");
	buff = strncat(dest, src, nb);
	ft_buff = ft_strncat(ft_dest, ft_src, nb);
	if (ft_dest != ft_buff)
		printf("[2] KO, return value from ft_strncat is different of ft_dest.");
	else if (strcmp(buff, ft_buff) != 0)
	{
		printf("[2] KO, strcmp between ft_dest and dest is different of 0");
		return (1);
	}
	else
		printf("[2] OK, nb = %02d, result=%s\n", nb, ft_buff);
	return (0);
}
*/