/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:04:48 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/14 16:30:11 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int nbr;
	int m;

	m = 0;
	nbr = 0;
	while (str[nbr] != '\0')
	{
		if (str[nbr] >= '0' && str[nbr] <= '9')
		{
			m++;
		}
		nbr++;
	}
	if (m == nbr)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
