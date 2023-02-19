/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:23:38 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/30 11:25:22 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	number_of_array;

	index = 0;
	while (index < size - 1)
	{
		number_of_array = 0;
		while (number_of_array < size - index)
		{
			if (tab[number_of_array] > tab[number_of_array + 1])
				ft_swap((&tab[number_of_array]), &tab[number_of_array + 1]);
			number_of_array++;
		}
		index++;
	}
}
