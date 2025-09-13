/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:49:57 by alexasil          #+#    #+#             */
/*   Updated: 2025/08/04 16:32:45 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 2;
	j = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	if (power == 0)
		return (1);
	while (i <= power)
	{
		j *= nb;
		i++;
	}
	return (j);
}
/*
int	main(void)
{
	int nb = -2;
	int power = 2;
	int result = ft_iterative_power(nb, power);
	printf("Resultado : %d\n", result);
	return 0;
}
*/
