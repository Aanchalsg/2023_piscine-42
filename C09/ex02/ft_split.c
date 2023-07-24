/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aasharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:22:23 by aasharma          #+#    #+#             */
/*   Updated: 2023/07/12 18:25:56 by aasharma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	words;
	int	currently_is_word;

	words = 0;
	while (*str)
	{
		while (*str && is_separator(*str, charset))
			str++;
		currently_is_word = 0;
		while (*str && !is_separator(*str, charset))
		{
			if (!currently_is_word)
			{
				words++;
				currently_is_word = 1;
			}
			str++;
		}
	}
	return (words);
}

void	ft_strdup(char *str, int starti, int endi, char *dest)
{
	int	i;

	i = 0;
	while (starti < endi)
	{
		dest[i] = str[starti];
		starti++;
		i++;
	}
	dest[i] = 0;
}

void	split_to_words(char *str, char *charset, char **splitted)
{
	int	i;
	int	prev_i;

	i = 0;
	while (str[i])
	{
		while (str[i] && is_separator(str[i], charset))
			i++;
		prev_i = i;
		if (!str[prev_i])
			break ;
		while (str[i] && !is_separator(str[i], charset))
			i++;
		*splitted = malloc((i - prev_i + 1) * sizeof(char));
		ft_strdup(str, prev_i, i, *splitted);
		splitted++;
	}
	*splitted = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**splitted;

	splitted = malloc((1 + count_words(str, charset) * sizeof(char *)));
	split_to_words(str, charset, splitted);
	return (splitted);
}
