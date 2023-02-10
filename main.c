#include "ft_string.h"
#include "ft_matrix.h"
#include <stdlib.h>

int ft_is_args_valid(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		return (0);

	if (ft_strlen(argv[1]) != 31)
		return (0);

	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] < '1' || argv[1][i] > '4')
				return (0);
		}
		else
		{
			if (argv[1][i] != ' ')
				return (0);
		}
		i++;
	}
	return (1);
}

void ft_map_numbers(int numbers[16], char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			numbers[j] = str[i] - '0';
			j++;
		}

		i++;
	}
}

int	main(int argc, char **argv)
{
	int	matrix[4][4];
	int	numbers[16];

	if (ft_is_args_valid(argc, argv) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}

	ft_map_numbers(numbers, argv[1]);

	if (ft_solve_matrix(matrix, numbers, 0) == 1)
		ft_print_matrix(matrix);
	else
		ft_putstr("Error\n");

	return (0);
}
