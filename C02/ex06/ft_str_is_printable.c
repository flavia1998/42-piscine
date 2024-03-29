/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:53:43 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/14 15:42:57 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

 int main ()
 {
 	char str [50] = " ";
 	int ret = ft_str_is_printable(str);
 	printf("%d",ret);
 }
