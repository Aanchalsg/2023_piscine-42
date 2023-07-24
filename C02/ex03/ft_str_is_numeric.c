/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:46:55 by aasharma          #+#    #+#             */
/*   Updated: 2023/06/25 18:57:51 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 57))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
        char    *s;
        s = "";
        printf("%s -%d", s, ft_str_is_numeric(s));
}
*/
