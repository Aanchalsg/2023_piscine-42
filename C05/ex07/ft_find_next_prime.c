/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:04:46 by aasharma          #+#    #+#             */
/*   Updated: 2023/07/06 17:05:05 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		nb = 2;
	while (!ft_is_prime(nb) && nb <= 2147483647)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
 
 int main(void)
{
	printf("%d", ft_find_next_prime(9));
}
*/
