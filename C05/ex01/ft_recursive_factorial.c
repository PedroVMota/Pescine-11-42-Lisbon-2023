/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:47:21 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/11 00:25:09 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
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
//?            printf("The Factorial number of:\t%i!\t%i\n", i,
//?		ft_recursive_factorial(i));
//?            i++;
//?        }
//?    }
//?}
