/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:11:30 by alexasil          #+#    #+#             */
/*   Updated: 2025/10/18 11:24:24 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int		num;
	int		i;

	if (!str)
		return (0);
	num = ft_strlen(str);
	ptr = (char *)malloc(num + 1);
	i = 0;
	while (i < num)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
