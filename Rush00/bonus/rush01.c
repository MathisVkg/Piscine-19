/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeclerf <mdeclerf@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 07:49:14 by mdeclerf          #+#    #+#             */
/*   Updated: 2021/02/14 16:07:19 by mdeclerf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int i;

	i = 0;
	ft_putchar('/');
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
	}
	if (x >= 2)
	{
		ft_putchar('\\');
	}
}

void	last_line(int x)
{
	int i;

	i = 0;
	ft_putchar('\n');
	ft_putchar('\\');
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		if (x >= 2)
		{
			ft_putchar('/');
		}
	}
}

void	mid_lines(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y - 2)
	{
		ft_putchar('\n');
		if (y > 2)
		{
			ft_putchar('*');
			while (i < x - 2)
			{
				ft_putchar(' ');
				i++;
			}
			if (x > 1)
				ft_putchar('*');
			i = 0;
		}
		j++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (y >= 1)
			first_line(x);
		if (y > 1)
		{
			mid_lines(x, y);
			last_line(x);
		}
		ft_putchar('\n');
	}
}
