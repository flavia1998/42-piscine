/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:10:14 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/08 12:33:51 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

// int main(void)
// {
// int a = 8;
// int b = 4;
// printf("Valor a inicial : %d \n", a);
// printf("Valor b inicial: %d \n", b);
// printf("---------------------\n");
// ft_swap(&a, &b);
// printf("Valor a swap: %d \n", a);
// printf("Valor b swap: %d \n", b);
// }