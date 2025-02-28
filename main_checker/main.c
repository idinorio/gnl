/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:18:56 by fkante            #+#    #+#             */
/*   Updated: 2019/07/15 16:05:00 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../srcs/get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>

int    main(void) 
{
	char *line;

	while (get_next_line(1, &line) != 0)
	{
		printf("%s\n", line);
	}
	return (0);
}
