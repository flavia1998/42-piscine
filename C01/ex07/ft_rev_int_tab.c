/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:26:34 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/07 16:51:55 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[size -1];
		tab[size -1] = aux ;
		size --;
		i ++;
	}	
}

int main()
{
	int arr [5] = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);	
	ft_rev_int_tab(arr, size);
	int i = 0;
	while (i < size)
	{
		printf("%d",arr[i]);
		i++;
	}	
}
