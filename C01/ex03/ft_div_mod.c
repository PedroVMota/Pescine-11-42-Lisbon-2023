/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:11:54 by pvital-m          #+#    #+#             */
/*   Updated: 2023/01/30 11:22:01 by pvital-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	*a_pt;
	int	*b_pt;

	a_pt = &a;
	b_pt = &b;
	*div = *a_pt / *b_pt;
	*mod = *a_pt % *b_pt;
}