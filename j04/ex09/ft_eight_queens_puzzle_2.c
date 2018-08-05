/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c	                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:40:11 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/17 16:14:32 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		absolute(int a, int b)
{
	return ((a >= b) ? a - b : b - a);
}

int		solution(int max, int *hist)
{
	int i;
	int queen;

	i = 0;
	while (i < max)
	{
		queen = 0;
		while (queen < max)
		{
			if (queen == hist[i])
				ft_putchar(queen + 48 + 1);
			queen++;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}

int		solve(int max, int col, int *hist)
{
	int		i;
	int		queen;
	int		possib;

	possib = 0;
	if (col == max)
		solution(max, hist);
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

int		ft_eight_queens_puzzle_2(void)
{
	int hist[8];

	return (solve(8, 0, hist));
}
