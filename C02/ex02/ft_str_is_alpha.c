/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 14:40:36 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/14 16:30:13 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		else if (str[nbr] >= 'A' && str[nbr] <= 'Z')
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
