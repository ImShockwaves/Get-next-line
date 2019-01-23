/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:38:08 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/29 15:33:32 by ccharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 7

# include "libft/libft.h"

# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>

int		get_next_line(const int fd, char **line);

#endif
