/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:33:14 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/22 10:27:52 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int		sep_len;
	int		i;
	int		ntc;

	ntc = 0;
	i = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		ntc = ntc + ft_strlen(strs[i]) + sep_len;
		i++;
	}
	ntc = ntc - sep_len;
	return (ntc);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_str;
	int		ntc;
	int		j;

	if (size == 0)
	{
		new_str = (char *)malloc(1);
		return (new_str);
	}
	ntc = total_len(size, strs, sep);
	j = 0;
	new_str = (char *)malloc(sizeof(char) * ntc + 1);
	while (j < size)
	{
		ft_strcat(new_str, strs[j]);
		if (j != size - 1)
			ft_strcat(new_str, sep);
		j++;
	}
	return (new_str);
}

// int main(void)
// {
// 	char *strs[3] = {"joca","lua","42"};
// 	char *array;
// 	array = ft_strjoin(3,strs,", ");
// 	printf("%s\n",array);
// 	return 0;
// }