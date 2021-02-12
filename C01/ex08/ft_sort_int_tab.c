/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:56:35 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/11 09:26:38 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int nbr;
	int swapped;

	swapped = 1;
	while (swapped != 0)
	{
		nbr = 0;
		swapped = 0;
		while (nbr < size - 1)
		{
			if (tab[nbr] > tab[nbr + 1])
			{
				swap(&tab[nbr], &tab[nbr + 1]);
				swapped = 1;
			}
			nbr++;
		}
	}
}
