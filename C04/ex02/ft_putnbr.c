/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:12:24 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/02 19:14:47 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Display the current character
void	ft_putchar(char a)
{
	write(1, &a, 1);
}

//Receave and display the number
void	ft_putnbr(int nb)
{
	if (nb == -2147483647)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483647;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

//int	main(void)
//{
//	ft_putnbr(2147483647);
//    write(1, "\n", 1);
//	ft_putnbr(318237);
//    write(1, "\n", 1);
//	ft_putnbr(0);
//    write(1, "\n", 1);
//	ft_putnbr(-21378);
//    write(1, "\n", 1);
//	ft_putnbr(-2147483647);
//    write(1, "\n", 1);
//	return (0);
//}
