/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 13:46:32 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/18 18:38:03 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_lenstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*newstring(char *str, int i, int k, char *answer)
{
	while (str[i] != '\0')
	{
		answer[i] = str[k + i];
		i++;
	}
	return (answer);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	int		found;
	char	*answer;

	k = -1;
	while (str[++k] != '\0')
	{
		i = -1;
		found = 0;
		answer = str;
		while (to_find[++i] != '\0')
		{
			if (to_find[i] == str[k + i])
				found++;
			if (to_find[i] == str[k + i])
				answer[i] = str[k + i];
		}
		if (found == ft_lenstr(to_find))
			return (newstring(str, i, k, answer));
	}
	return (NULL);
}
