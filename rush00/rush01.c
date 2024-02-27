/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduman <fduman@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:54:00 by fduman            #+#    #+#             */
/*   Updated: 2021/11/28 11:29:46 by fduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	p;
	int	r;

	r = 1;
	while (r <= y)
	{
		p = 1;
		while (p <= x)
		{
			if ((p == 1 && r == 1) || (p == x && r == y && p != 1 && r != 1))
				ft_putchar('/');
			else if ((p == x && r == 1) || (p == 1 && r == y))
				ft_putchar('\\');
			else if ((p == 1) || (p == x) || (r == 1) || (r == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			p++;
		}
		ft_putchar('\n');
		r++;
	}
}
