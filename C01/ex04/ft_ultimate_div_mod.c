/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:17:03 by aasharma          #+#    #+#             */
/*   Updated: 2023/06/24 16:37:15 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rem;

	div = *a / *b;
	rem = *a % *b;
	*a = div;
	*b = rem;
}
/*
void	main (void)
{
	int a = 7;
	int b = 4;
	ft_ultimate_div_mod(&a,&b);
	printf("div: %d\n",  a);
	printf("rem: %d\n",  b);
}
*/
