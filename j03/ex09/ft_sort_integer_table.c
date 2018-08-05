/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 20:55:14 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/10 23:17:39 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int buffer;

	i = 0;
	while (i < size)
		if (tab[i] > tab[i + 1])
		{
			buffer = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = buffer;
			i = 0;
		}
		else
			i++;
}
