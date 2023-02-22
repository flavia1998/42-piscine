/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:58:07 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/08 12:26:44 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	div = *a / *b;
	rest = *a % *b;
	*a = div;
	*b = rest;
}

// int main (void)
// {
// 	int a = 15;
// 	int b = 10;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("O resultado da divisao : %d \n", a);
// 	printf("o resto da divisao: %d \n",b);
// }