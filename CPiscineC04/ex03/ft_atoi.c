/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:11:11 by alexasil          #+#    #+#             */
/*   Updated: 2025/08/03 11:50:16 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	set_number(int *nb, char numChar)
{
	int	num;

	num = numChar - '0';
	*nb = (*nb * 10) + num;
}

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		set_number(&result, str[i]);
		i++;
	}
	if ((count % 2) != 0)
		result *= -1;
	return (result);
}
/*
int	main(void)
{
	char str[] = "  	---+--+1234ab567";
	int resultado = ft_atoi(str);
	printf("Resultado : %d", resultado);
	return (0);
}
*/
