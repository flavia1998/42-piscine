/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:25:31 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/20 10:59:38 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb < 2)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial (nb - 1));
	}
}

// int main(void)
// {
//     int nb = 3;
//     int fatorial = ft_recursive_factorial(nb);
//     printf("O fatorial do numero é: %d", fatorial);
//     return 0;
// }