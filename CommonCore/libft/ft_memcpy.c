/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:58:01 by alexasil          #+#    #+#             */
/*   Updated: 2025/10/19 15:10:22 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest || !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
        char src[] = "Hello World";
        char dest[20];
        char dest2[20];

        printf("=== Test 1: Copy string ===\n");
        ft_memcpy(dest, src, 11);
        dest[11] = '\0';
        printf("Source: %s\n", src);
        printf("Destination (ft_memcpy): %s\n", dest);
        memcpy(dest2, src, 11);
        dest2[11] = '\0';
        printf("Destination (memcpy): %s\n", dest2);

        printf("\n=== Test 2: Copy partial ===\n");
        ft_memcpy(dest, src, 5);
        dest[5] = '\0';
        printf("Copy 5 bytes: %s\n", dest);

        printf("\n=== Test 3: Copy bytes (not string) ===\n");
        unsigned char src_bytes[] = {65, 66, 67, 68, 69};
        unsigned char dest_bytes[5];
        ft_memcpy(dest_bytes, src_bytes, 5);
        printf("Copied bytes: %d %d %d %d %d\n", dest_bytes[0], dest_bytes[1], 
               dest_bytes[2], dest_bytes[3], dest_bytes[4]);

        printf("\n=== Test 4: NULL check ===\n");
        void *result = ft_memcpy(NULL, src, 5);
        printf("Result of NULL dest: %p (should be NULL)\n", result);

        return (0);
}
*/
