/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 19:11:09 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/22 13:42:40 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_coord_is_special(t_rush *ptr, int x, int y) //pendant que tab rempli de 0, check cas particulier
{
	if ((x == 0 && ptr->coord[2][y] == 1)
		|| (y == 0 && ptr->coord[0][x] == 1)
		|| (x == ptr->size - 1 && ptr->coord[3][y] == 1)
		|| (y == ptr->size - 1 && ptr->coord[1][x] == 1))
		return (ptr->size);
	else if (ptr->coord[0][x] == ptr->size)
		return (y + 1);
	else if (ptr->coord[1][x] == ptr->size)
		return (ptr->size - y);
	else if (ptr->coord[2][y] == ptr->size)
		return (x + 1);
	else if (ptr->coord[3][y] == ptr->size)
		return (ptr->size - x);
	else
		return (0);
}

int		ft_create_solve_tab(t_rush *ptr) //creer un plateau rempli de 0 avec cas particulier pour gagner du temps
{
	int		y;
	int		x;

	y = 0;
	if (!(ptr->solve = malloc(sizeof(*(ptr->solve)) * ptr->size))) //tab de tab
		return (0);
	while (y < ptr->size)
	{
		if (!(ptr->solve[y] = malloc(sizeof(*(ptr->solve[y])) * ptr->size))) //aloue ligne par ligne 
			return (0);
		x = 0;
		while (x < ptr->size) //stock all solus
		{
			ptr->solve[y][x] = ft_coord_is_special(ptr, x, y); //preset numero de cas particulier sinon set 0
			x++;
		}
		y++;
	}
	return (1);
}

int		ft_set_coord(t_rush *ptr, char *str) // para = pointeur et chaine carac
{
	int		x;
	int		y;
	int		i;

	if (!(ptr->coord = malloc(sizeof(*(ptr->coord)) * 4))) //tableau de tableau | tab0&1 = view, tab2 = interieur
		return (0);
	y = 0;
	i = 0;
	while (y < 4) //boucle tant que y inferieur 4
	{
		if (!(ptr->coord[y] = malloc(sizeof(*(ptr->coord[y])) * ptr->size))) //aloue la memoire de la premiere ligne
			return (0);
		x = 0;
		while (x < ptr->size) //boucle jusqu'a x = 4
		{
			ptr->coord[y][x] = str[i] - '0'; //stock coord dans int ** tab coord
			x++;
			i = i + 2; //sauter l'espace
		}
		y++;
	}
	return (1); //return 1 si all ok
}

t_rush	*ft_format(char *str) //ft_format de type trush
{
	t_rush	*ptr;

	if (!(ptr = malloc(sizeof(*ptr)))) //attribution memoire d'un nbr octet dans la memoire | prend l'addition des vars de trush = 36 octets
		return (0); //si malloc egale null, = existe pas
	ptr->size = (ft_strlen(str) + 1) / 8; //accede a l'element size de la structure
	if (ft_set_coord(ptr, str) == 0) //transforme dans un tableau
		return (0);
	if (!(ft_create_solve_tab(ptr))) //creer un plateau rempli de 0
		return (0);
	return (ptr);
}
