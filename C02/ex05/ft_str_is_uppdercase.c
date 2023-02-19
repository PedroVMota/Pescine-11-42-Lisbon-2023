/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppdercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:36:22 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/01 19:55:07 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	letter_checker(char a)
{
	if ((a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	index;
	int	return_value;

	index = -1;
	return_value = 1;
	if (str[0] == 0)
		return (return_value);
	while (str[++index])
	{
		if (letter_checker(str[index]) == 0)
			return_value = 0;
	}
	return (return_value);
}
