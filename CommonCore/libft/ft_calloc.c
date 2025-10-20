/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:37:06 by alexasil          #+#    #+#             */
/*   Updated: 2025/10/18 10:56:30 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*ptr;
	size_t			total;

	total = nitems * size;
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
		return (0);
	ft_bzero(ptr, total);
	return (ptr);
}
