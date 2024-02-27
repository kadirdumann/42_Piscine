/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduman <fduman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:28:20 by fduman            #+#    #+#             */
/*   Updated: 2021/12/08 14:29:41 by fduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int xy)
{
	if (xy == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		xy = 147483648;
	}
	if (xy < 0)
	{
		ft_putchar('-');
		xy *= -1;
	}
	if (xy < 10)
	{
		ft_putchar(xy + 48);
		return ;
	}
	else
	{
		ft_putnbr(xy / 10);
		ft_putnbr(xy % 10);
	}
}
