/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:41:48 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/17 10:59:22 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	sign = 1;
	i = 0;
	result = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
		sign *= -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
			result = result * 10 + str[i] - '0' ;
			i++;
	}	
	return (result * sign);
}

// int main(void)
// {
// 	char str [50] = "---++12ab567";
// 	int numbers = ft_atoi(str);
// 	printf("%d\n",numbers);
// 	printf("%d\n",atoi(str));
// }