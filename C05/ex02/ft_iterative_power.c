/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:34:30 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/18 12:31:49 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	t;

	i = 1;
	t = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		t = t * nb;
		i++;
	}
	return (t);
}

// int main(int argc, char const *argv[])
// {
// 	int nb = 0;
// 	int power =0 ;
// 	int result = ft_iterative_power(nb, power);
// 	printf("%d", result);
// 	return 0;
// }