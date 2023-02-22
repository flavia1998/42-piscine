/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:50:16 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/14 17:34:50 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(unsigned char c)
{
	char	*hexadigits;

	hexadigits = "0123456789abcdef";
	ft_putchar(hexadigits[c / 16]);
	ft_putchar(hexadigits[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			ft_putchar('\\');
			ft_hexa(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

// int main(void)
// {
// 	char str[90]="lulajd jkasdgka lZJX NBCZHF '\t' slahz";
// 	ft_putstr_non_printable(str);
// 	ft_putchar('\n');
// }