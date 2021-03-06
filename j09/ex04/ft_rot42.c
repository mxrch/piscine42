/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 23:28:31 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/13 00:44:52 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'K' && str[i] <= 'Z')
				|| (str[i] >= 'k' && str[i] <= 'z'))
			str[i] -= 10;
		else if ((str[i] >= 'a' && str[i] <= 'j')
				|| (str[i] >= 'A' && str[i] <= 'J'))
			str[i] += 16;
		++i;
	}
	return (str);
}
