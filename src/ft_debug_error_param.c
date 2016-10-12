/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug_error_param.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdefresn <tdefresn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 18:34:08 by tdefresn          #+#    #+#             */
/*   Updated: 2016/10/11 10:25:03 by tdefresn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_debug_error_param(const char *fn_name)
{
	ft_putstr("\n\x1B[31mERROR in libft.a: the function ");
	ft_putstr(fn_name);
	ft_putendl("returned the following error:\nSent parameter is NULL. \
			Verify your code, it is unsafe !!!\x1B[0m");
}
