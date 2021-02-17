/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:11:06 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/14 16:30:08 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int nbr;
	int m;

	m = 0;
	nbr = 0;
	while (str[nbr] != '\0')
	{
		if (str[nbr] >= 'a' && str[nbr] <= 'z')
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
