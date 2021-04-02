/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 09:13:24 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/17 14:55:02 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int m;
	
	if (nb < 0)
	{
		m = (unsigned int)(nb * (-1));
		ft_putchar('-');
	}
	else
		m = (unsigned int)nb;
	if (m >= 10)
	{
		ft_putnbr(m / 10);
		ft_putnbr(m % 10);
	}
	else
		ft_putchar(m + '0');
}
