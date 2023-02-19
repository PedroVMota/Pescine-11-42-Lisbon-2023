/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:01:48 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/11 00:33:04 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
?The line "while (i <= nb/ i)"
?if the current value of 'i' is less than or equal to the square root of 'nb'.
?If 'i' is greater than the square root of 'nb',
?then the other factor that can multiply with 'i' to give 'nb' will smaller`i`
?and thus would have already been checked in the previous iterations.This way,
?the loop only needs to check the values of 'i' up to the square root of 'nb',
?making the function more efficient.int ft_is_prime(int nb)
*/

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
