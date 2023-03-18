/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:46:06 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/14 15:43:16 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')
			&& str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main (void)
{
 	char str[10] = "pASyi";	
 	 int ret;
 	 ret = ft_str_is_alpha(str);
	 printf("%d",ret);
 	return 0;
 }
