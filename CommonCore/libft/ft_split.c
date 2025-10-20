/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:59:55 by alexasil          #+#    #+#             */
/*   Updated: 2025/10/19 17:02:09 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	fill_array(char **strs, char const *s, char c, int count)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (i < count)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
			j++;
		strs[i] = ft_substr(s, start, j - start);
		i++;
	}
	strs[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	fill_array(strs, s, c, count);
	return (strs);
}
