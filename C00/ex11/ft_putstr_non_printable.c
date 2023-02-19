/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 23:57:20 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/30 13:16:38 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#define HEX "0123456789abcdef"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_get_hex(char nb)
{
	ft_putchar('\\');
	ft_putchar(HEX[nb / 16]);
	ft_putchar(HEX[nb % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if ((str[index] < 32) || (str[index] > 127))
		{
			
			ft_get_hex(str[index]);
            index++;
		}
        ft_putchar(str[index]);
	}
	str[index] = '\0';
}

int	main(void)
{
	char string[15] = "Ola\nesta bem?";
	ft_putstr_non_printable(string);
	return (0);
}