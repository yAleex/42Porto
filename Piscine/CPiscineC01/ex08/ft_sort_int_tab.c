/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:39:14 by alexasil          #+#    #+#             */
/*   Updated: 2025/07/23 16:42:07 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
void    print_array(int *tab, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(void)
{
    int tab[] = {7, 2, 9, 4, 1, 5};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Antes da ordenação:\n");
    print_array(tab, size);

    ft_sort_int_tab(tab, size);

    printf("Depois da ordenação:\n");
    print_array(tab, size);

    return 0;
}
*/
