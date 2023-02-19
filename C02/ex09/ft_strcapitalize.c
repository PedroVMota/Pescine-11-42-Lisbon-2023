/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 21:33:00 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/31 19:13:29 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanomeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (3);
	if (c >= 'A' && c <= 'Z')
		return (3);
	if (c >= '0' && c <= '9')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ft_is_alphanomeric(str[i - 1]) != 3)
				str[i] -= 32;
		}
	}
	return (str);
}
