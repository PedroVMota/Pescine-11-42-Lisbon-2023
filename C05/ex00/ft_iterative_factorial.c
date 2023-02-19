/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:00:41 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/11 00:25:02 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
		res *= i;
	return (res);
}

//?int	main(int argc, char **argv)
//?{
//?    int argv_int;
//?    int i = 0;
//?	if (argc == 2)
//?    {
//?        argv_int = atoi(argv[1]);
//?        while (i <= argv_int)
//?        {
//?            printf("The Factorial number of:\t%i!\t%i\n",
//?                    i, ft_iterative_factorial(i));
//?            i++;
//?        }
//?    }
//?}
