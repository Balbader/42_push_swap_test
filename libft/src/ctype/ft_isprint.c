/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:21:34 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/04 15:48:15 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((unsigned char)c >= FIRST_PRINTABLE
		&& (unsigned char)c <= LAST_PRINTABLE);
}
