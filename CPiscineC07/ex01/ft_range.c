/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:54:01 by alexasil          #+#    #+#             */
/*   Updated: 2025/08/06 16:18:30 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	j;

	j = 0;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (!dest)
		return (NULL);
	while (min < max)
	{
		dest[j] = min;
		j++;
		min++;
	}
	return (dest);
}
/*
int	main()
{
	int min = 1;
	int max = 6;
	int k = 0;
	int *resultado = ft_range(min, max);
	while (k < (max - min))
	{
		printf("Resultado[%d] :%d\n", k, resultado[k]);
		k++;
	}
	free(resultado);
	return (0);
}
*/
