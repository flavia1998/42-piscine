/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:00:18 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/14 19:02:55 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>
 #include <stdio.h>

char	ft_chlowcase(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch = ch + 32;
	return (ch);
}

char	ft_chupcase(char ch)
{
	if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
	return (ch);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
			|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
			|| str[i - 1] > 'z')
			str[i] = ft_chupcase(str[i]);
		else
			str[i] = ft_chlowcase(str[i]);
		i++;
	}
	return (str);
}

 int main (void)
 {
 	char str[80]="\nola, tudo bem? 42pala;vras quareNta-e-duas; cinQu>enta+e+um";
 	 ft_strcapitalize(str);
 	 printf("%s",str);
 }
