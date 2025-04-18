/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:45:24 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/15 19:09:13 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
       size_t strlen(const char *s);

DESCRIPTION
       The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').

RETURN VALUE
       The strlen() function returns the number of bytes in the string pointed to by s.
*/

#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str);

int	main(void)
{
	const char	str[] = "Hellosummer";

	printf("%lu\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
	return (0);
}
