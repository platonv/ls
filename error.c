/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 12:04:52 by                   #+#    #+#             */
/*   Updated: 2016/01/08 17:36:57 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void		ft_error(const char *str)
{
	char		*name;

	name = ft_strnew(ft_strlen(str));
	if (errno && errno != ENOTDIR)
	{
		name = ft_strncpy(name, str, ft_strlen(str) - 1);
		write(2, "ft_ls: cannot acces ", 20);
		perror(name);
	}
}
