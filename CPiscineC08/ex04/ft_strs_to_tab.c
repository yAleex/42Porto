/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:53:20 by alexasil          #+#    #+#             */
/*   Updated: 2025/08/07 15:19:12 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	strlen(char *av)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (av[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

char	string(char *av, s_stock_str *dest)
{
	int	i;
	char	*str;

	i = 0;
	char str[strlen(av) + 1];
	while (av[i] != "\0")
	{
		str[i] = av[i];
		i++
	}
	str[i] = '\0';
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	s_stock_str	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (
	while(i < ac)
	{
		dest[i].size = str
	}
}
