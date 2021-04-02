/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:20:38 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/21 13:42:05 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_rush
{
	int	**solve;
	int	**coord;
	int	size;
}				t_rush;

/*
** useful function
*/

int				ft_strlen(char *str);

/*
** ft_aff_solve.c
*/

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_aff_solve(t_rush t);

/*
** ft_solve.c
*/

int				ft_solve(t_rush *ptr);

/*
** ft_check_allowed.c
*/

int				ft_check_allowed(t_rush *ptr, int x, int y);

/*
** ft_format.c
*/

t_rush			*ft_format(char *str);

/*
** ft_check_error.c
*/

int				ft_check_error(int argc, char **argv);

/*
** ft_view_col_row.c
*/

int				ft_view_col1(t_rush *ptr, int x_y);
int				ft_view_col2(t_rush *ptr, int x_y);
int				ft_view_row1(t_rush *ptr, int x_y);
int				ft_view_row2(t_rush *ptr, int x_y);

#endif
