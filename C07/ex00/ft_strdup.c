/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:54:31 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/09 16:56:01 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		source_index;
	int		malloc_index;
	char	*ptst;

	len = ft_strlen(src);
	ptst = (char *)malloc(sizeof(char) * len);
	if (!ptst)
		return (ptst);
	source_index = 0;
	malloc_index = 0;
	while (src[source_index])
	{
		ptst[malloc_index] = src[source_index];
		malloc_index++;
		source_index++;
	}
	ptst[malloc_index] = '\0';
	return (ptst);
}

/* int	main(void)
{
	char *str = "Hello World!";
	char *newstr = ft_strdup(str);

	printf("%s", newstr);
	return (0);
} */