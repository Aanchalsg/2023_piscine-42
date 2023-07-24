/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:28:03 by aasharma          #+#    #+#             */
/*   Updated: 2023/06/25 20:31:43 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_char_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_printable(str[i]))
			return (0);
		else
			i++;
	}
	return (1);
}
/*
int main(void)
{
        char    *s;
        s = ""
        s = "\0"
        
        s = "ab\0cdefg\0";

        printf("%s -%d", s, ft_str_is_printable(s));
}
*/
