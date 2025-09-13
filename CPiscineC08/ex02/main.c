/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexasil <alexasil@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:37:44 by alexasil          #+#    #+#             */
/*   Updated: 2025/08/06 11:40:29 by alexasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int main(void)
{
    int a = -42;
    int b = 0;
    int c = 15;

    printf("ABS(%d) = %d\n", a, ABS(a));
    printf("ABS(%d) = %d\n", b, ABS(b));
    printf("ABS(%d) = %d\n", c, ABS(c));

    return 0;
}
