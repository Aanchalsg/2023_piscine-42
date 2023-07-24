/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:20:44 by aasharma          #+#    #+#             */
/*   Updated: 2023/07/04 14:47:01 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		fact = nb * ft_recursive_factorial(nb - 1);
	}
	return (fact);
}
/*
#include <stdio.h>

int	main	(void)
{
	printf("factorial of %d is %d", 5, ft_recursive_factorial(5));
}
*/
