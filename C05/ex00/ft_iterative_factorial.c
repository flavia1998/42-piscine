/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:14:51 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/20 10:55:26 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}

// int main(void)
// {
//     int nb = 14;
//     int fatorial = ft_iterative_factorial(nb);
//     printf("O fatorial do numero é: %d", fatorial);
//     return 0;
// }