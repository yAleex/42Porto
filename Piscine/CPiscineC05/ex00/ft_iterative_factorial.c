/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:30:34 by alexasil          #+#    #+#             */
/*   Updated: 2025/08/04 16:14:34 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
/*
int	main(void)
{
	int n = 4;
	int result = ft_iterative_factorial(n);
	printf("Fatorial de %d é %d\n", n, result);
	return 0;
}
*/
