/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:21:54 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/22 16:11:43 by mvankoek         ###   ########.fr       */
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

int		main(int argc, char **argv) //argc nbr argument de l'executable //argv tableau stock argument
{
	t_rush	*ptr; //pointeur sur structure    *ptr pointeur sur trush

	if (ft_check_error(argc, argv) <= 0) //verifie que commandes est correcte
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!(ptr = ft_format(argv[1]))) //si format existe pas, error
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (ft_solve(ptr) == 0)
		ft_putstr("Error\n");
	else
		ft_aff_solve(*ptr); //print tab
	ft_free(ptr); //apres print, efface tous pour liberer
	return (1);
}
