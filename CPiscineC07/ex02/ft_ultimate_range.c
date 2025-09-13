/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 12:45:34 by alexasil          #+#    #+#             */
/*   Updated: 2025/08/06 16:22:33 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
int	main()
{
	int min = 3;
	int max = 6;
	int *range = NULL;
	int size;
	int i;

	size = ft_ultimate_range(&range, min, max);
	if (size == -1)
	{
		printf("Erro de alocação de memória.\n");
		return (1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Resultado[%d]: %d\n", i, range[i]);
	}
	free(range);
	return (0);
}
*/
