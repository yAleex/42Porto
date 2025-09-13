/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:41:39 by alexasil          #+#    #+#             */
/*   Updated: 2025/07/31 15:28:09 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		k = i;
		while (to_find[j] != '\0' && str[k] == to_find[j])
		{
			j++;
			k++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
int main()
{
    char str[] = "aaaaba";
    char to_find[] = "aab";
    
    printf("Resultado: %s", ft_strstr(str, to_find));
    return (0);
}
*/
