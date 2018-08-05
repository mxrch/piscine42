/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 02:07:27 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/19 10:14:23 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = -1;
	while (str	[++i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		mot;

	i = -1;
	mot = 0;
	ft_strlowcase(str);
	while (str[++i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122)
				&& !(str[i] >= 48 && str[i] <= 57))
			mot = 0;
		if (str[i] >= 97 && str[i] <= 122 && mot == 0)
		{
			str[i] -= 32;
			mot = 1;
		}
		if (str[i] >= 48 && str[i] <= 57)
			mot = 1;
	}
	return (str);
}
