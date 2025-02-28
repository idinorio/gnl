/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 17:22:56 by fkante            #+#    #+#             */
/*   Updated: 2019/07/16 19:13:14 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE	256
# define FD_LIMIT	4864
# define FALSE		0
# define TRUE		1
# define FAILURE	-1
# define SUCCESS	0

/*
** To find the FD_LIMIT, simply use the command "limit"
** type launchctl limit maxfiles:
** You will get your per-process soft and hard limits of files.
** This depends on your system. By default, the macOS is soft 256 and hard
** unlimited.
** Obviously, it is not "unlimited", it really is limited by the kernel maxfil
** per process. You may find it by using the command:
** sysctl kern.maxfilesperproc
*/

# include "libft/libft.h"

/*
** if you have never been on this project, you may find below two great
** readings to understand the basic concepts:
** file descriptors: http://www.bottomupcs.com/file_descriptors.xhtml
** french video on fd: https://www.youtube.com/watch?v=Bv0Nqt99qMI
** heap and stack: http://stackoverflow.com/a/1213360
*/

int		get_next_line(const int fd, char **line);

#endif
