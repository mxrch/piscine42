/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:40:11 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/17 11:10:38 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		absolute(int a, int b)
{
	return ((a >= b) ? a - b : b - a);
}

int		solve(int max, int col, int *hist)
{
	int		i;
	int		queen;
	int		possib;

	possib = 0;
	if (col == max)
		possib++;
	i = 0;
	while (i < max)
	{
		queen = 0;
		while (queen < col && !(hist[queen] == i
					|| absolute(hist[queen], i) == col - queen))
			queen++;
		if (queen < col)
		{
			i++;
			continue;
		}
		hist[col] = i;
		possib += solve(max, col + 1, hist);
		i++;
	}
	return (possib);
}

int		ft_eight_queens_puzzle(void)
{
	int hist[8];

	return (solve(8, 0, hist));
}
