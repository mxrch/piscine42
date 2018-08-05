/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 12:02:02 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/19 15:31:12 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		k;
	char	*tmp;

	i = -1;
	k = -1;
	tmp = dest;
	while (tmp[++i] != '\0')
		dest[i] = tmp[i];
	dest[i] = '\0';
	while (tmp[++k] != '\0')
	{
		dest[i] = src[k];
		i++;
	}
	return (0);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		k;
	char	*tmp;

	i = -1;
	k = -1;
	tmp = dest;
	if (nb < 0)
		ft_strcat(dest, src);
	if (nb < 0)
		return (0);
	while (tmp[++i] != '\0')
		dest[i] = tmp[i];
	dest[i] = '\0';
	while (tmp[++k] != '\0' && k < nb)
	{
		dest[i] = src[k];
		i++;
	}
	return (0);
}