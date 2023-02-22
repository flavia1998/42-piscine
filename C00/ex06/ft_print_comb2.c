/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:56:59 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/06 12:40:28 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number_with_two_places(int nb)
{
	ft_putchar(nb / 10 + '0');
	ft_putchar(nb % 10 + '0');
}

void	print_two_numbers_with_two_places(int first_nb, int second_nb)
{
	print_number_with_two_places(first_nb);
	ft_putchar(' ');
	print_number_with_two_places(second_nb);
	if (first_nb != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	first_nb;
	int	second_nb;

	first_nb = 0;
	second_nb = 0;
	while (first_nb <= 99)
	{
		second_nb = first_nb + 1;
		while (second_nb <= 99)
		{
			print_two_numbers_with_two_places(first_nb, second_nb);
			second_nb++;
		}
		first_nb++;
	}
}
