/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 19:32:44 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/09 11:00:10 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_tab(int *tab, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		++i;
	}
	if (tab[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_verrif_tab(int n, int *tab, int sub)
{
	if (tab[n - 1] >= 10 - sub)
	{
		if (tab[n - 2] >= 10 - (sub + 1))
		{
			ft_verrif_tab(n - 1, tab, sub + 1);
		}
		else
			tab[n - 2]++;
		tab[n - 1] = tab[n - 2] + 1;
	}
}

void	ft_print_combn(int n)
{
	int tab[n];
	int set;

	if (n > 9 || n < 1)
		return ;
	set = 1;
	tab[0] = 0;
	while (set < n)
	{
		tab[set] = tab[set - 1] + 1;
		++set;
	}
	while (tab[0] <= 10 - n)
	{
		while (tab[n - 1] <= 9)
		{
			ft_print_tab(tab, n);
			tab[n - 1]++;
		}
		if (n > 1)
			ft_verrif_tab(n, tab, 0);
	}
}
