/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:55:47 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/21 15:55:29 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	len;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	array = (int *) malloc (sizeof(int) * (len));
	if (array == NULL)
		return (0);
	while (min < max)
	{
		array[i] = min;
		min ++;
		i ++;
	}
	return (array);
}

// int main (void)
// {
// 	int min = 7;
// 	int max = 17;
// 	int *array = ft_range (min,max);
// 	int i =0;
// 	while (i < max-min)
// 	{
// 		printf("%d\n",array[i]);
// 		i++;
// 	}
// 	if (min > max)
// 	{
// 		printf("NULL");
// 	}
// 	return (0);
// }