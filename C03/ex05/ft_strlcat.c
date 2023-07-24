/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:51:17 by aasharma          #+#    #+#             */
/*   Updated: 2023/06/28 15:28:22 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srclen;
	unsigned int	destlen;

	i = 0;
	j = 0;
	srclen = ft_strlen(src);
	while (dest[i] != '\0')
	{
		i++;
	}
	destlen = i;
	if (size == 0 || size <= destlen)
	{
		return (srclen + size);
	}
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (destlen + srclen);
}
/*
int main(void)
{
	char src[10]	= "ab";
	char dest[10]	= "123";
	unsigned int 	nb2 = 6;
	
	printf("Str: %u", ft_strlcat(dest, src, nb2));
	return (0);
}
*/
