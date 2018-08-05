/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:22:01 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/09 11:02:29 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	char c;

	if (n >= 0)
	{
		c = 'P';
	}
	else
	{
		c = 'N';
	}
	ft_putchar(c);
}
