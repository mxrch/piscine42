/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 00:53:42 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/13 01:18:40 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i > j && i < k) || (i < j && i > k))
		return (i);
	else if ((j > i && j < k) || (j < i && j > k))
		return (j);
	else
		return (k);
}
