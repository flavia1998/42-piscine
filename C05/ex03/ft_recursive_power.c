/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:37:05 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/18 12:47:35 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 1 || power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, (power -1)));
}

// int main(void)
// {
// 	int nb = 1;
// 	int power = -1;
// 	int result = ft_recursive_power (nb, power);
// 	printf("%d", result);
// 	return 0;
// }