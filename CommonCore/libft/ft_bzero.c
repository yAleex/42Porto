/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:26:03 by alexasil          #+#    #+#             */
/*   Updated: 2025/10/16 17:07:06 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*c;
	size_t			i;

	i = 0;
	c = (unsigned char *)str;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}
