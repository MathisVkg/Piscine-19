/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 09:15:00 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/17 09:19:40 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ispace(char c)
{
	return (c == '\f' || c == '\n' || c == ' '
		|| c == '\r' || c == '\t' || c == '\v');
}

int	ft_atoied(char *str)
{
	while (ft_ispace(*str) == 1)
		str++;
	while (*str == '+' || *str == '-')
		str++;
	if (*str >= '0' && *str <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int m;
	int p;

	p = 1;
	m = 0;
	if (ft_atoied(str) == 0)
		return (0);
	while (ft_ispace(*str) == 1)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			p *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		str++;
	str--;
	while (*str >= '0' && *str <= '9')
	{
		m += (*str - '0') * p;
		str--;
		p *= 10;
	}
	return (m);
}
