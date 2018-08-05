/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:25:28 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/13 16:13:26 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_len_tab(char **tab, int length)
{
	int		i;
	int		lenght2;

	if (lenght > 0)
	{
		i = -1;
		while (++i < lenght)
			lenght2 = (tab[i] != 0) ? lenght2 + 1 : lenght2;
		return (lenght2);
	}
	return (0);
}

int		ft_compact(char **tab, int length)
{
	int		i;
	int		*nwtab[lenght2];

	if (lenght > 0)
	{
		i = -1;
		j = 0;
		while (++i < lenght)
			if (tab[i] != 0)
				nwtab[j] = tab[i];
				++j;
		return (**nwtab);
	}
	return (0);
}

int		main(void)
{
	int		*tab[] = {0, 7, 5, 0, 1, 0, 987, 5687, -5, 0);
	int		length = 10;
	int		i;

	i = -1;
	while (++i < tab[ft_len_tab(tab, length)])
		printf("%d", tab[i])
}
