/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:15:01 by alexasil          #+#    #+#             */
/*   Updated: 2025/10/19 15:32:42 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest || !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
			d[i] = s[i++];
	}
	return (dest);
}

/*
int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char dest1[20];
	char dest2[20];

	printf("=== Test 1: No overlap ===\n");
	ft_memmove(dest1, str1, 5);
	dest1[5] = '\0';
	memmove(dest2, str2, 5);
	dest2[5] = '\0';
	printf("ft_memmove: %s\n", dest1);
	printf("memmove:    %s\n", dest2);

	printf("\n=== Test 2: Overlapping (backward) ===\n");
	strcpy(str1, "Hello");
	strcpy(str2, "Hello");
	ft_memmove(str1 + 1, str1, 5);
	memmove(str2 + 1, str2, 5);
	str1[6] = '\0';
	str2[6] = '\0';
	printf("ft_memmove: %s\n", str1);
	printf("memmove:    %s\n", str2);

	printf("\n=== Test 3: Overlapping (forward) ===\n");
	strcpy(str1, "Hello");
	strcpy(str2, "Hello");
	ft_memmove(str1, str1 + 1, 4);
	memmove(str2, str2 + 1, 4);
	str1[4] = '\0';
	str2[4] = '\0';
	printf("ft_memmove: %s\n", str1);
	printf("memmove:    %s\n", str2);

	return (0);
}
*/
