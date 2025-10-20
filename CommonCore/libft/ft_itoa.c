/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:36:11 by alexasil          #+#    #+#             */
/*   Updated: 2025/10/19 18:01:08 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	len = count_digits(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	sign = 1;
	if (n < 0)
		sign *= -1;
	str[len] = '\0';
	while (len > 0 && n != 0)
	{
		str[len - 1] = (n % 10) * sign + '0';
		n /= 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
