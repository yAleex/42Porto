/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:29:38 by alexasil          #+#    #+#             */
/*   Updated: 2025/07/23 16:37:44 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <studio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	s;

	s = size - 1;
	i = 0;
	while (i < s / 2)
	{
		temp = tab[i];
		tab[i] = tab[s - i];
		tab[s - i] = temp;
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

// Função main para testar
int main(void)
{
    int tab[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Antes da inversão:\n");
    print_array(tab, size);

    ft_rev_int_tab(tab, size);

    printf("Depois da inversão:\n");
    print_array(tab, size);

    return 0;
}
*/
