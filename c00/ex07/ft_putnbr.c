/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduman <fduman@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:29:08 by fduman            #+#    #+#             */
/*   Updated: 2021/11/29 20:12:44 by fduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
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
		ft_putnbr(xy / 10);
	ft_putnbr(xy % 10);
}
