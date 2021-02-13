/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 10:29:25 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/13 10:29:26 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int y)
{
	int i;

	i = 0;
	ft_putchar('A');
	if (y > 1)
	{
		while (i < y - 2)
		{
			ft_putchar('B');
			i++;
		}
	}
	if (y >= 2)
	{
		ft_putchar('A');
	}
}

void	last_line(int y)
{
	int i;

	i = 0;
	ft_putchar('\n');
	ft_putchar('C');
	if (y > 1)
	{
		while (i < y - 2)
		{
			ft_putchar('B');
			i++;
		}
		if (y >= 2)
		{
			ft_putchar('C');
		}
	}
}

void	mid_lines(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < x - 2)
	{
		ft_putchar('\n');
		if (x > 2)
		{
			ft_putchar('B');
			while (i < y - 2)
			{
				ft_putchar(' ');
				i++;
			}
			if (y > 1)
				ft_putchar('B');
			i = 0;
		}
		j++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (x >= 1)
			first_line(y);
		if (x > 1)
			mid_lines(x, y);
		if (x > 1)
			last_line(y);
	}
}
