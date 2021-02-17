/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:18:29 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/14 16:29:59 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int nbr;

	nbr = 0;
	while (str[nbr] != '\0')
	{
		if (str[nbr] >= 65 && str[nbr] <= 90)
		{
			str[nbr] = str[nbr] + 32;
		}
		nbr++;
	}
	return (str);
}
