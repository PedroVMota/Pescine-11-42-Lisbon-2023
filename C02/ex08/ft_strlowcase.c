/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:17:51 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/31 19:11:36 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	convert_capital(char a)
{
	if (!(a >= 'a') && (a <= 'z'))
		return (a + 33);
	return (a);
}

char	*ft_strlowcase(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += 32;
	}
	return (str);
}
