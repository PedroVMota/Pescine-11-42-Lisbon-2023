/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 11:32:55 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/31 17:39:07 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	letter_checker(char a)
{
	if ((a >= 'a' && a <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	return_value;

	return_value = 1;
	index = -1;
	if (str[0] == 0)
		return (return_value);
	while (str[++index])
	{
		if (letter_checker(str[index]) == 0)
		return_value = 0;
	}
	return (return_value);
}
