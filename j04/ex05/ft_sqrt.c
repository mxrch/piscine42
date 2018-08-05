/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:14:24 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/17 11:09:24 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		result;

	result = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		else if (result * result > nb)
			return (0);
		else
			++result;
	}
	return (0);
}
