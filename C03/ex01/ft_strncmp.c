/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:47:49 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/14 14:23:28 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

// int main (void)
// {
// 	char s1[15]="maria";
// 	char s2 [15] = "marai";
// 	unsigned int n = 6;
// 	int dif = ft_strncmp(s1,s2,n);
// 	printf("%d\n",dif);
// 	int dif2= strncmp(s1,s2,n);
// 	printf("%d",dif2);
// }