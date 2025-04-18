/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:05:21 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/17 18:43:27 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       strchr, strrchr, strchrnul - locate character in string

SYNOPSIS
       char *strchr(const char *s, int c);

DESCRIPTION
       The strchr() function returns a pointer to the first occurrence of the character c in the string s.
       Here "character" means "byte"; these functions do not work with wide or multibyte characters.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer to the matched character or NULL if the character  is  not  found.   
       The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to
       the terminator.
*/

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	const char	test[] = "hellosummerhowryou";
	int	c = 'u';

	printf("%s\n", ft_strchr(test, c));
	printf("%s\n", strchr(test, c));
	return (0);
}
