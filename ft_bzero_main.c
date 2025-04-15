/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:41:40 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/15 19:43:56 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       bzero, explicit_bzero - zero a byte string

SYNOPSIS
       void bzero(void *s, size_t n);
       void explicit_bzero(void *s, size_t n);

DESCRIPTION
       The  bzero()  function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes con‐
       taining '\0') to that area.
       The explicit_bzero() function performs the same task as bzero().  It differs from bzero() in that it guarantees  that  compiler  optimiza‐
       tions will not remove the erase operation if the compiler deduces that the operation is "unnecessary".

RETURN VALUE
       None.
*/

#include <stddef.h>
#include <strings.h>

void	bzero(void *s, size_t n);

int	main(void)
{
	..
}

