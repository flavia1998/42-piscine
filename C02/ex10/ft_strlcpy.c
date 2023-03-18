/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:34:01 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/14 15:42:35 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <string.h>
 #include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	t_src;
	unsigned int	i;

	t_src = 0;
	i = 0;
	while (src[t_src] != '\0')
	{
		t_src ++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{
			dest[i] = src [i];
			i ++;
		}
		dest[i] = '\0';
	}
	return (t_src);
}

 int main(void)
 {
     char src[50] = "lk";
     char dest[50];
     unsigned int size = 6;
     ft_strlcpy(dest, src, size);
     printf("%s", dest);
     printf("\n");
     return 0;
 }
