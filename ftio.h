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

#ifndef FTIO_H

# define FTIO_H

# include <unistd.h>

void	ft_putchar(char c);
void	print_error(void);
int		store_sudoku(int sudoku[9][9][10], char const *argv[]);
void	print_sudoku(int const sudoku[9][9][10]);

#endif
