/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thertzog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:09:59 by thertzog          #+#    #+#             */
/*   Updated: 2018/07/13 12:15:04 by thertzog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define OPEN 1
# define CLOSE 0

typedef int			t_ft_bool;
typedef struct		s_door
{
	int				state;
}					t_door;

void				open_door(t_door *door);
void				close_door(t_door *door);
t_ft_bool			is_door_open(t_door *door);
t_ft_bool			is_door_close(t_door *door);
#endif
