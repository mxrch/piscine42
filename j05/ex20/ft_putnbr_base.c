/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 22:41:11 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/20 14:39:41 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_lenstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_verifbase(char	*base)
{
	int		i;
	int		k;

	i = -1;
	if (ft_lenstr(base) < 2)
		return (0);
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
	}
	i = -1;
	while (base[++i])
	{
		k = 0 + i;
		while (++k < ft_lenstr(base))
		{
			if (base[i] == base[k])
				return (0);
		}
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;

	size = ft_lenstr(base);
	if (ft_verifbase(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(nbr / size * (-1), base);
			ft_putnbr_base(nbr % size * (-1), base);
		}
		else if (nbr >= size)
		{
			ft_putnbr_base(nbr / size, base);
			ft_putnbr_base(nbr % size, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}