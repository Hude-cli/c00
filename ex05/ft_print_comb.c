/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugde-cl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:29:20 by hugde-cl          #+#    #+#             */
/*   Updated: 2022/03/14 12:36:13 by hugde-cl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < 55)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	while (a < 57)
	{
		b = a + 1;
		c = b + 1;
		while (b < 57)
		{
			while (c < 58)
			{
				ft_putchar(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
	}
}
