/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:13:47 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/11 09:14:08 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int sec;
	int b[size];
	int temp;

	temp = size;
	size -= 1;
	sec = 0;
	while (size >= 0)
	{
		b[sec] = tab[size];
		size--;
		sec++;
	}
	size += 1;
	while (size < temp)
	{
		tab[size] = b[size];
		size++;
	}
}
