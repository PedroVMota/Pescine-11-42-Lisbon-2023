/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:37:01 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/29 12:43:49 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	letter_checker(char a)
{
	if ((a >= 32 && a <= 126))
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	index;
	int	return_value;

	return_value = 1;
	index = -1;
	if (str[0] == 0)
		return (return_value);
	while (str[++index])
		if (letter_checker(str[index]) == 0)
		return_value = 0;
	return (return_value);
}
