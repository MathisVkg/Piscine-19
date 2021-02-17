/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:43:57 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/17 14:28:31 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int m;
	unsigned int p;

	p = 0;
	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	while (src[p] != '\0' && p < nb)
	{
		dest[m++] = src[p++];
	}
	dest[m] = src[p];
	dest[m] = '\0';
	return (dest);
}
