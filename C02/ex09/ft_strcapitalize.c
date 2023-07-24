/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:35:44 by aasharma          #+#    #+#             */
/*   Updated: 2023/06/26 17:08:45 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	word_start;

	word_start = 1;
	ft_strlowcase(str);
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (word_start == 1)
				*str -= 32;
			word_start = 0;
		}
		else if (*str >= '0' && *str <= '9')
			word_start = 0;
		else
			word_start = 1;
		str++;
	}
	return (str);
}	
/*
int	main(void)
{
	char	str[] = "SALUTE, comment tu vas ? 42mots quaRAnte-deux; cinquante+et+un";
	printf( "%s", ft_strcapitalize(str));
}
*/
