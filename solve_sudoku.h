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

#ifndef SOLVE_SUDOKU_H

# define SOLVE_SUDOKU_H

# include "check_sudoku.h"

typedef struct	s_cell {
	int row;
	int column;
}				t_cell;

void			store_cell(int sudoku[9][9][10], int i, int j, int k);
void			store_candidates(int sudoku[9][9][10]);
t_cell			next_position(int sudoku[9][9][10], t_cell c);
int				backtracking(int sudoku[9][9][10], t_cell c);
int				solve_sudoku(int sudoku[9][9][10]);

#endif
