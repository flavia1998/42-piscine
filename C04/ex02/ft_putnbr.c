/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:38:40 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/16 16:07:39 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	 if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	 if (nb < 10)
	{
		ft_putchar(nb + 48);
		return;
	}
	else
	{
		ft_putnbr(nb / 10);
	}
	ft_putnbr(nb % 10);		
}

//  int main (void)
//  {
//  	int nb=2147483647;
//  	ft_putnbr(nb);
// }
