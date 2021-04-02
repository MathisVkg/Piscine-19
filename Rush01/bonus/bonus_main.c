/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:27:28 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/21 17:07:45 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_free(t_rush *ptr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(ptr->coord[i]);
		i++;
	}
	i = 0;
	while (i < ptr->size)
	{
		free(ptr->solve[i]);
		i++;
	}
	free(ptr->coord);
	free(ptr->solve);
	free(ptr);
}

int		main(int argc, char **argv)
{
	t_rush	*ptr;

	if (ft_check_error(argc, argv) <= 0)
	{
		ft_putstr("Error check\n");
		return (0);
	}
	if (!(ptr = ft_format(argv[1])))
	{
		ft_putstr("Error format\n");
		return (0);
	}
	if (ft_solve(ptr) == 0)
		ft_putstr("Error solve\n");
	else
		ft_aff_solve(*ptr);
	ft_free(ptr);
	return (1);
}
