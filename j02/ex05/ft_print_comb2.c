/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:09:18 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/09 11:07:49 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar2(int c)
{
	int d;
	int e;

	if (c <= 9)
	{
		d = 0;
		e = c;
	}
	d = c / 10;
	e = c % 10;
	ft_putchar(d + '0');
	ft_putchar(e + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	b = 0;
	while (++a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			ft_putchar2(a);
			ft_putchar(' ');
			ft_putchar2(b);
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
