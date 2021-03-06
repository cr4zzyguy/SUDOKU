/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cr4zzyguy- <cr4zzyguy-@student.42.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 12:34:28 by cr4zzyguy-         #+#    #+#            */
/*   Updated: 2017/08/20 16:10:59 by cr4zzyguy-         ###   ########.       */
/*                                                                            */
/* ************************************************************************** */

#include "ftio.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

int		store_sudoku(int sudoku[9][9][10], char const *argv[])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] >= '0' && argv[i + 1][j] <= '9')
				sudoku[i][j][0] = argv[i + 1][j] - '0';
			else if (argv[i + 1][j] == '.')
				sudoku[i][j][0] = 0;
			else
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

void	print_sudoku(int const sudoku[9][9][10])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (j != 0)
				ft_putchar(' ');
			ft_putchar(sudoku[i][j][0] + '0');
			++j;
		}
		ft_putchar('\n');
		++i;
	}
}
