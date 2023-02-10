#include "ft_matrix.h"
#include "ft_string.h"

void ft_print_matrix(int matrix[4][4])
{
    int x;
    int y;

    y = 0;

    while (y < 4)
    {
        x = 0;
        while (x < 4)
        {
            ft_putchar(matrix[x][y] + '0');
            if (x != 3)
            {
                ft_putchar(' ');
            }
            x++;
        }
        ft_putchar('\n');
        y++;
    }
}

int ft_validate_column_up(int matrix[4][4], int position, const int numbers[16])
{
    int i;
    int max;
    int visible_towers;

    i = 0;
    max = 0;
    visible_towers = 0;
    if (position / 4 == 3)
    {
        while (i < 4)
        {
            if (matrix[i][position % 4] > max)
            {
                max = matrix[i][position % 4];
                visible_towers++;
            }

            i++;
        }
        if (numbers[position % 4] != visible_towers)
            return (1);
    }
    return (0);
}

int ft_validate_column_down(int matrix[4][4], int position, const int numbers[16])
{
    int i;
    int max;
    int visible_towers;

    i = 3;
    max = 0;
    visible_towers = 0;
    if (position / 4 == 3)
    {
        while (i >= 0)
        {
            if (matrix[i][position % 4] > max)
            {
                max = matrix[i][position % 4];
                visible_towers++;
            }

            i--;
        }
        if (numbers[4 + position % 4] != visible_towers)
            return (1);
    }
    return (0);
}

int ft_validate_row_left(int matrix[4][4], int position, const int numbers[16])
{
    int i;
    int max;
    int visible_towers;

    i = 0;
    max = 0;
    visible_towers = 0;
    if (position % 4 == 3)
    {
        while (i < 4)
        {
            if (matrix[position / 4][i] > max)
            {
                max = matrix[position / 4][i];
                visible_towers++;
            }

            i++;
        }
        if (numbers[8 + position / 4] != visible_towers)
            return (1);
    }
    return (0);
}

int ft_validate_row_right(int matrix[4][4], int position, const int numbers[16])
{
    int i;
    int max_size;
    int visible_towers;

    i = 3;
    max_size = 0;
    visible_towers = 0;
    if (position % 4 == 3)
    {
        while (i >= 0)
        {
            if (matrix[position / 4][i] > max_size)
            {
                max_size = matrix[position / 4][i];
                visible_towers++;
            }

            i--;
        }
        if (numbers[12 + position / 4] != visible_towers)
            return (1);
    }
    return (0);
}

int ft_validate_matrix(int matrix[4][4], int position, const int numbers[16])
{
    if (ft_validate_row_left(matrix, position, numbers) == 1)
        return (1);
    if (ft_validate_row_right(matrix, position, numbers) == 1)
        return (1);
    if (ft_validate_column_down(matrix, position, numbers) == 1)
        return (1);
    if (ft_validate_column_up(matrix, position, numbers) == 1)
        return (1);
    return (0);
}

int ft_is_double(int table[4][4], int position, int size)
{
    int i;

    i = 0;
    while (i < position / 4)
    {
        if (table[i][position % 4] == size)
            return (1);

        i++;
    }

    i = 0;
    while (i < position % 4)
    {
        if (table[position / 4][i] == size)
            return (1);
        i++;
    }
    return (0);
}

int ft_solve_matrix(int table[4][4], const int numbers[16], int position)
{
    int size;

    if (position == 16)
        return (1);

    size = 1;
    while (size <= 4)
    {
        if (ft_is_double(table, position, size) == 0)
        {
            table[position / 4][position % 4] = size;
            if (ft_validate_matrix(table, position, numbers) == 0)
            {
                if (ft_solve_matrix(table, numbers, position + 1) == 1)
                    return (1);
            }
            else
                table[position / 4][position % 4] = 0;
        }

        size++;
    }
    return (0);
}