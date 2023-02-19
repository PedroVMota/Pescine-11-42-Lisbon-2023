/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:37:05 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/11 13:14:42 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//get length
int	ft_length(char *str)
{
	int	length;

	length = 0;
	while (length)
		length++;
	return (0);
}

// Copy the src to a dest
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	return (dest);
}

int	ft_return_length(int size, char **strs, int size_sep)
{
	int	i;
	int	len;

	i = -1;
	len = size_sep * -1;
	while (++i < size)
		len += size_sep + ft_strlen(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		length;
	char	*final_str;

	if (size == 0)
	{
		final_str = (char *)malloc(1);
		return (final_str);
	}
	length = return_lenght(size, strs, ft_strlen(sep));
	final_str = malloc(sizeof(char) * (length + 1));
	if ((final_str == NULL))
		return (0);
	i = -1;
	while (++i < size)
	{
		final_str = ft_strcpy(final_str, strs[i]);
		if (i + 1 < size)
			final_str = ft_strcpy(final_str, sep);
	}
	*final_str = '\0';
	return (final_str - length);
}
