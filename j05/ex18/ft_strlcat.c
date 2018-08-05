/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 12:02:02 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/19 22:27:33 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_lenstr(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				k;
	char			*tmp;
	int				len;

	i = 0;
	k = 0;
	tmp = dest;
	len = (ft_lenstr(tmp) + ft_lenstr(src));
	printf("%u\n", len);
	while (tmp[i] != '\0')
	{
		dest[i] = tmp[i];
		i++;
	}
	printf("%u\n", len);
	dest[i] = '\0';
	while (tmp[k] != '\0' && i + 1 < size)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	return (len);
}