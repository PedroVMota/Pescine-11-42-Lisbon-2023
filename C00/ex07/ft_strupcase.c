/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:44:22 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/29 15:25:25 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	convert_capital(char a)
{
	if (!(a >= 'A') && (a <= 'Z'))
		return (a + 33);
	return (a);
}

char	*ft_strupcase(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
