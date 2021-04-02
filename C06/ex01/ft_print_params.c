/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:26:01 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/22 12:01:52 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int m;

	m = 1;
	while (m < argc)
	{
		ft_putstr(argv[m]);
		ft_putstr("\n");
		m++;
	}
	return (0);
}
