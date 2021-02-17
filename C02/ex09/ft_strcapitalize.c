/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:22:58 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/14 16:34:42 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int nbr;

	nbr = 0;
	while (str[nbr] != '\0')
	{
		if (str[nbr] >= 65 && str[nbr] <= 90)
			str[nbr] = str[nbr] + 32;
		nbr++;
	}
	nbr = 0;
	while (str[nbr] != '\0')
	{
		if ((str[nbr] > 122 || str[nbr] < 48)
		|| (str[nbr] > 57 && str[nbr] < 65)
		|| (str[nbr] > 90 && str[nbr] < 97))
		{
			if (str[nbr + 1] >= 97 && str[nbr + 1] <= 122)
				str[nbr + 1] = str[nbr + 1] - 32;
		}
		nbr++;
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
	}
	return (str);
}
