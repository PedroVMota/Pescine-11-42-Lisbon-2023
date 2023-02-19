/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:08:50 by pvital-m          #+#    #+#             */
/*   Updated: 2023/02/05 17:28:11 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h> */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char s5[] = {'a', 'b', 'c', -10, -20, '\0'};
	char *s6;
	char *s7;

	s1 = calloc(10, sizeof(char));
	s2 = calloc(8, sizeof(char));
	s3 = calloc(10, sizeof(char));
	s4 = calloc(10, sizeof(char));
	s6 = calloc(10, sizeof(char));
	s7 = calloc(1, sizeof(char));
	s1 = "abcdefghi";
	s2 = "abcdefg";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	s6 = "abcdefghi"; // s6 is the same of s1
	s7 = "";
	printf("ft_strcmp(s1, s2)\t= %d\noriginalstrcmp(s1, s2)\t= %d\n",
	ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("ft_strcmp(s1, s3)\t= %d\noriginal strcmp(s1, s3)\t= %d\n",
	ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("ft_strcmp(s1, s4)\t= %d\noriginal strcmp(s1, s4)\t= %d\n",
	ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("ft_strcmp(s1, s5)\t= %d\noriginal strcmp(s1, s5)\t= %d\n",
	ft_strcmp(s1, s5), strcmp(s1, s5));
	printf("ft_strcmp(s1, s6)\t= %d\noriginal strcmp(s1, s6)\t= %d\n",
		ft_strcmp(s1, s6), strcmp(s1, s6));
	printf("ft_strcmp(s1, s7)\t= %d\noriginal strcmp(s1, s7)\t= %d\n",
	ft_strcmp(s1, s7), strcmp(s1, s7));
	return(0);
} */