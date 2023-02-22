/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira- <fvieira-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:57:02 by fvieira-          #+#    #+#             */
/*   Updated: 2023/02/08 09:23:19 by fvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;
	int	maior;

	i = size -1;
	while (i >= 0)
	{
		j = i;
		maior = j;
		while (j >= 0)
		{
			if (*(tab + j) > *(tab + maior))
			{
				maior = j;
			}
		j--;
		}
	aux = tab [i];
	tab[i] = tab[maior];
	tab[maior] = aux;
	i --;
	}
}

/*int main(void)
{	int tab [5] = { 2,6,3,4,5};
	int size = sizeof(tab)/sizeof(tab[0]);
	
	ft_sort_int_tab(tab, size);
	
	int i =0;
	while(i<size)
	{
		printf("%d",tab[i]);
		i++;
	}

	return (0);
}*/
