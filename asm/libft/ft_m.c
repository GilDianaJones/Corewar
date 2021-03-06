/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_m.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/16 12:39:13 by gthomas           #+#    #+#             */
/*   Updated: 2017/05/16 12:45:59 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void		ft_m(void **s, size_t size)
{
	if (!(*s = (void *)malloc((size + 1) * sizeof(void))))
		exit(EXIT_FAILURE);
}
