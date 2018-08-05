/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 09:18:53 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/17 11:06:49 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		nvnb;

	i = nb;
	nvnb = 1;
	if (!(nb < 0 || nb > 12))
	{
		while (i > 0)
		{
			nvnb *= i;
			--i;
		}
		return (nvnb);
	}
	else
		return (0);
}
