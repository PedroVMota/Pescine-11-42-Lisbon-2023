/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:12:14 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/02 19:12:15 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

//#include <stdio.h>
//int main ()
//{
//    char *str = "Hello World!";
//    int lenght = ft_strlen(str);
//    printf("Lenght of the string: %i", lenght);
//
//    return 0;
//}