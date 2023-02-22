/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:29:28 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/21 15:54:42 by fvieira-         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;

	len = max - min;
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (len);
}

// int main (void)
// {
// 	int *arr;
// 	int min = 0;
// 	int max = 3;
// 	int len_array = ft_ultimate_range(&arr,min,max); 

// 	printf("%d",len_array);
//  	return (0);
// }