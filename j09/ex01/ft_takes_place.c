/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:52:48 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/12 21:06:49 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_pm(int hour)
{
	int		x;
	int		y;

	if (hour > 12 && hour < 23)
	{
		hour -= 12;
		x = hour;
		y = x + 1;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 P.M. AND %d.00 P.M.\n", x, y);
	}
}

void	ft_am(int hour)
{
	int		x;
	int		y;

	if (hour > 0 && hour < 11)
	{
		x = hour;
		y = x + 1;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%d.00 A.M. AND %d.00 A.M.\n", x, y);
	}
}

void	ft_exceptions(int hour)
{
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("11.00 A.M. AND 12.00 P.M.\n");
	}
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 P.M.\n");
	else if (hour == 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("11.00 P.M. AND 12.00 A.M.\n");
	}
	else if (hour == 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 A.M.\n");
}

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 24)
	{
		ft_exceptions(hour);
		ft_am(hour);
		ft_pm(hour);
	}
}
