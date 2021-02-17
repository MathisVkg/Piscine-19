/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:25:58 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/14 16:30:03 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int nbr;
	int m;

	m = 0;
	nbr = 0;
	while (str[nbr] != '\0')
	{
		if (str[nbr] >= 32 && str[nbr] <= 126)
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
