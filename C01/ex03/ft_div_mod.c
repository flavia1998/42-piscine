/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:28:46 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/09 12:05:14 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

 int main()
 {
	int a =2;
	int b =2;
 	int div;
	int mod;
	ft_div_mod (a,b,&div,&mod);
	printf ("%d",mod);
 }
