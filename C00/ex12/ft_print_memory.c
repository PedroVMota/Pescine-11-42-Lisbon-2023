/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:28:07 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/31 17:37:33 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX "0123456789abcdef"

void	ft_putchar(char caracter)
{
	write(1, &caracter, 1);
}

void	write_char_in_hex(unsigned char uc)
{
	ft_putchar(HEX[uc / 16]);
	ft_putchar(HEX[uc % 16]);
}

void	addr_write(unsigned long addr, int size)
{
	if (addr < 16)
	{
		while (--size > 0)
			ft_putchar('0');
		ft_putchar(HEX[addr]);
		return ;
	}
	addr_write(addr / 16, size - 1);
	ft_putchar(HEX[addr % 16]);
}

void	content_print(char *str, int size)
{
	int	tmp;

	tmp = size - 1;
	while (++tmp < 16)
	{
		if (tmp % 2 == 0)
			ft_putchar(' ');
		write(1, "  ", 2);
	}
	while (size--)
	{
		if ((unsigned char)*str < 32 || (unsigned char)*str >= 127)
			ft_putchar('.');
		else
			ft_putchar(*str);
		str++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	index;

	addr_write((unsigned long)addr, 16);
	ft_putchar(':');
	index = -1;
	while (++index < 16 && size)
	{
		if (index % 2 == 0)
			ft_putchar(' ');
		write_char_in_hex((unsigned char)(((char *)addr)[index]));
		size--;
	}
	ft_putchar(' ');
	content_print((char *)addr, index);
	if (size > 0)
	{
		ft_putchar('\n');
		ft_print_memory(addr + 16, size);
	}
	else
		ft_putchar('\n');
	return (addr);
}
