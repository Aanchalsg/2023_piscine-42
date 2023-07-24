/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:57:03 by aasharma          #+#    #+#             */
/*   Updated: 2023/06/28 17:05:51 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (s1[i] == s2[i] && i < n - 1 && (s1[i] || s2[i]))
			i++;
		return (s1[i] - s2[i]);
	}
	else
		return (0);
}
/*
int	main()
{
	char	s[] = "Hello";
	char	t[] = "Hellz";
	unsigned int n = 4;
	printf(" result: %d", ft_strncmp(s, t, n));
	return (0);
}
*/
