/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:48:29 by aasharma          #+#    #+#             */
/*   Updated: 2023/07/04 15:37:48 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	multi;

	multi = 1;
	if (power < 0)
		return (0);
	if ((power == 0) && (nb == 0))
		return (1);
	while (power > 0)
	{
		multi *= nb;
		power--;
	}
	return (multi);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(5, 3));
}
*/
