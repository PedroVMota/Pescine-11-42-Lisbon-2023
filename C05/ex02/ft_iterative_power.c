/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:14:53 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/11 00:32:25 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
		return (result);
	}
}

//?int	main(int argc, char **argv)
//?{
//?	if (argc == 3)
//?	{
//?		printf("The number is: %i^%i = %i\n",
//?			atoi(argv[1]),
//?			atoi(argv[2]),
//?			ft_iterative_power(atoi(argv[1]),
//?				atoi(argv[2])));
//?	}
//?}
