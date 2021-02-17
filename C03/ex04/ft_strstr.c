/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:30:22 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/17 13:56:26 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int m;
	int p;

	if (*to_find == 0)
		return (str);
	m = 0;
	while (str[m] != '\0')
	{
		p = 0;
		while (to_find[p] == str[m + p])
		{
			if (to_find[p + 1] == '\0')
			{
				return (str + m);
			}
			p++;
		}
		m++;
	}
	return (0);
}
