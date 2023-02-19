/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:01:11 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/31 19:07:35 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	letter_checker(char a)
{
	if ((a >= '0') && (a <= '9'))
		return (1);
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	return_value;
	int	index;

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
