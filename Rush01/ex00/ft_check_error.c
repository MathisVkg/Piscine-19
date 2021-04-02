/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:10:29 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/22 10:47:53 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_is_correct_patern(char *str, int size) //chaine de caractere + size
{
	int	i;

	i = 0;
	while (i < (size * 8) - 1) //i inferieur a strlen
	{
		if (!((str[i] - '0') > 0 && (str[i] - '0') <= size)) //trasnforme carac ascii en en 4 (52 - 48) | contraire de compris entre 0 et 4
			return (0);
		i++;
		if (i == (size * 8) - 1) //si while match, return 1 pour sortir
			return (1);
		else if (str[i] != ' ') //si different de espace return 0
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_error(int argc, char **argv) 
{
	int		size;
	int		len;

	if (argc != 2) //si nbr argument different de 2 | only 2 argument
		return (0);
	len = ft_strlen(argv[1]); //len = taille argv2-1 
	if (len != 31) //taille 16 nombres et 15 espaces
		return (0);
	// if ((len + 1) % 8 != 0) //verifie n'est pas un mutliple de 8
	// 	return (0);
	size = (len + 1) / 8; 
	if (ft_is_correct_patern(argv[1], size) == 0) // verifie chaine de cractere que infos need
		return (0);
	return (1);
}
