/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_main.c                                    :+:      :+:    :+:   */
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
DESCRIPTION
       The  bzero()  function erases the data in the n bytes of the memory 
       starting at the location pointed to by s, by writing zeros (bytes con‐
       taining '\0') to that area.
RETURN VALUE
       None.
*/

#include <stddef.h>
#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char	test[100] = "aaaabbbb";
	size_t	n;

	n = 2;
	printf("%s\n", test);
	bzero(test, n);
	printf("%s\n", test);
}
