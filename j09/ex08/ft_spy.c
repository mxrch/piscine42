/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 03:50:40 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/18 19:22:55 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		ft_search(char *str)
{
	char	*attack;
	char	*bauer;
	char	*president;
	int		i;
	int		j;

	attack = "attack";
	bauer = "bauer";
	president = "president";
	i = 0;
	j = 0;
	if (ft_strcmp(str, attack) == 0 || ft_strcmp(str, bauer) == 0
			|| ft_strcmp(str, president) == 0)
	{
		ft_putstr("Alert!!!\n");
		return (1);
	}
	return (0);
}

char	ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (*str);
}

int		main(int argc, char **argv)
{
	char	str[1000];
	int		i;
	int		j;
	int		k;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
				str[k] = argv[i][j];
			if (argv[i][j] != ' ')
				k++;
			j++;
		}
		str[j] = '\0';
		ft_strlowcase(str);
		if (ft_search(str) == 1)
			return (0);
		ft_search(str);
	}
	return (0);
}
