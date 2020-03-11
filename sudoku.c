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

#include "sudoku.h"

#include <stdio.h>
#include <time.h>

int		main(int argc, char const *argv[])
{
	if (argc == 10)
	{
		if (store_sudoku(g_sudoku, argv))
		{
			if (check_sudoku(g_sudoku))
			{
				if (solve_sudoku(g_sudoku))
					print_sudoku(g_sudoku);
				else
					print_error();
			}
			else
				print_error();
		}
		else
			print_error();
	}
	else
		print_error();
	return (0);
}
