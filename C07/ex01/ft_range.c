/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:05:49 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/11 12:39:07 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*arr;
	int	m_index;

	i = min;
	while (i < max)
		i++;
	arr = (int *)malloc(sizeof(int) * i);
	m_index = 0;
	i = min;
	while (i <= max)
	{
		arr[m_index] = i;
		i++;
		m_index++;
	}
	return (arr);
}
/* 
int	main(void)
{
	int	*arr;
	int	i;

	int min, max;
	min = -1;
	max = 4;
	arr = ft_range(min, max);
	i = 0;
	while (min <= max && i <= max)
	{
		printf("| %i |\n", arr[i]);
		min++;
		i++;
	}
	return (0);
}
 */