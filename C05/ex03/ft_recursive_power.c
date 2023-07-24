/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:17:11 by aasharma          #+#    #+#             */
/*   Updated: 2023/07/04 17:47:34 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	multi;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	multi = nb * ft_recursive_power(nb, power - 1);
	return (multi);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_power(5,3));
	return (0);
}
*/
