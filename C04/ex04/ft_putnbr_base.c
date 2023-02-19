/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:27:53 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/07 00:37:50 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	len(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i] != '\0')
	{
		j = i;
		while (base[++j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
		}
		if (base[i] == '+' || base[i] == '-' || base[i] < 32)
			return (-1);
	}
	i = 0;
	while (base[i] != '\0')
		++i;
	return (i);
}

void	i_base(int nbr, int base, char *chars)
{
	if (nbr < base)
		ft_putchar(chars[nbr % base]);
	else
	{
		i_base(nbr / base, base, chars);
		ft_putchar(chars[nbr % base]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;

	l = len(base);
	if (l >= 2)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			i_base((nbr / l) * -1, l, base);
			ft_putchar(base[nbr % l * -1]);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			i_base(nbr * -1, l, base);
		}
		else
			i_base(nbr, l, base);
	}
}

int	main(void)
{
	ft_putnbr_base(-1231323131, "0123456789ABCDEF");
	return (0);
}
