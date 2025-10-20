/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:27:28 by alexasil          #+#    #+#             */
/*   Updated: 2025/10/18 11:46:44 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	count;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		ptr = (char *)malloc(1);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	i = start;
	count = 0;
	while (s[i] != '\0' && count < len)
	{
		ptr[count] = s[i];
		i++;
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
