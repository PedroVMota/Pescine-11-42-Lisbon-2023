/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:14:53 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/11 00:29:50 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb, int power)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb, power - 1));
}

//?int	main(int argc, char **argv)
//?{
//?	if (argc == 3)
//?	{
//?		printf("The number is: %i^%i = %i\n",
//?			atoi(argv[1]),
//?			atoi(argv[2]),
//?			ft_recursive_factorial(atoi(argv[1]),
//?				atoi(argv[2])));
//?	}
//?}
