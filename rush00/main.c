/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduman <fduman@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 10:54:06 by fduman            #+#    #+#             */
/*   Updated: 2021/11/28 13:45:36 by fduman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	main(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (x == 0 || y == 0)
	{
		return (0);
	}
	if (x < 0)
	{
		x = x * -1 ;
	}
	if (y < 0)
	{
		y = y * -1 ;
	}
	rush(x, y);
	return (0);
}
