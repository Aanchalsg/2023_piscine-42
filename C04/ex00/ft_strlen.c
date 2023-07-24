/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:40:52 by aasharma          #+#    #+#             */
/*   Updated: 2023/06/28 12:48:34 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
/*
int	main(void)
{
	char	*s;
	int	count;
	
	s = "HelloKitty";
	count = ft_strlen(s);
	printf(" length : %d\n", count);
	return (0);
}
*/
