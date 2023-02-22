/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:42:50 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/14 12:54:27 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{	
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char s1[15] = "ola";
// 	char s2 [15] = "olap";
// 	int resu = strcmp(s1,s2);
// 	printf("%d\n",resu);
// 	int dif = ft_strcmp(s1,s2);
// 	printf("%d\n",dif);
// }