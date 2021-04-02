/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groubaud <groubaud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 13:10:29 by groubaud          #+#    #+#             */
/*   Updated: 2021/02/21 17:37:55 by groubaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int		ft_is_correct_patern(char *str, int size)
{
	int	i;

	i = 0;
	while (i < (size * 8) - 1)
	{
		if (!((str[i] - '0') > 0 && (str[i] - '0') <= size))
			return (0);
		i++;
		if (i == (size * 8) - 1)
			return (1);
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_error(int argc, char **argv)
{
	int		size;
	int		len;

	if (argc != 2)
		return (0);
	len = ft_strlen(argv[1]);
	if ((len + 1) % 8 != 0 || len >= 56)
		return (0);
	size = (len + 1) / 8;
	if (ft_is_correct_patern(argv[1], size) == 0)
		return (0);
	return (1);
}
