/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:21:20 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/18 15:14:36 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int m;

	m = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		m = m * nb;
		nb--;
	}
	return (m);
}
