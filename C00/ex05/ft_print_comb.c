/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:34:58 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/06 12:38:50 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numb(char i, char j, char h)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &h, 1);
	if (i != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	h;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			h = j + 1;
			while (h <= '9')
			{
				ft_print_numb(i, j, h);
				h++;
			}
			j++;
		}
		i++;
	}
}
