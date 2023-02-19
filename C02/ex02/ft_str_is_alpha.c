/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 10:46:30 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/02 15:41:48 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	letter_checker(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	if (str[0] == 0)
		return (num);
	while (str[i] != '\0')
	{
		if (letter_checker(str[i]) == 0)
		num = 0;
		i++;
	}
	return (num);
}
