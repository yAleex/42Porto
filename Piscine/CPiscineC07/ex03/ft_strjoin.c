/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 11:58:52 by alexasil          #+#    #+#             */
/*   Updated: 2025/08/06 14:51:36 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_str(int size, char **strs)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			k++;
			j++;
		}
		i++;
	}
	return (k);
}

char	*conc(int size, char **strs, char *sep, char *dest)
{
	int	b;
	int	c;
	int	d;

	b = 0;
	d = 0;
	while (b < size)
	{
		c = 0;
		while (strs[b][c])
		{
			dest[d++] = strs[b][c++];
		}
		c = 0;
		b++;
		while (sep[c] && (b < size))
		{
			dest[d++] = sep[c++];
		}
	}
	dest[d] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		total;
	int		a;

	a = 0;
	if (size == 0)
		return (NULL);
	while (sep[a])
		a++;
	total = count_str(size, strs) + a * (size - 1) + 1;
	dest = (char *)malloc(total * sizeof(char));
	if (!dest)
		return (0);
	return (conc(size, strs, sep, dest));
}
/*
int	main(void)
{
	char *strs[] = {"1", "23", "456", "789"};
	char *sep = ", ABC, ";
	char *result;

	result = ft_strjoin(4, strs, sep);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}
*/
