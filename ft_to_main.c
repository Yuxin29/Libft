/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:26:09 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/17 17:38:23 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
NAME
       toupper, tolower, toupper_l, tolower_l - convert uppercase or lowercase

SYNOPSIS
       int toupper(int c);
       int tolower(int c);

DESCRIPTION
       These functions convert lowercase letters to uppercase, and vice versa.

       If c is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists in the current locale.  Oth‐
       erwise, it returns c.  The toupper_l() function performs the same task, but uses the locale referred to by the locale handle locale.

       If c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation exists in the current locale.  Oth‐
       erwise, it returns c.  The tolower_l() function performs the same task, but uses the locale referred to by the locale handle locale.

       If c is neither an unsigned char value nor EOF, the behavior of these functions is undefined.

RETURN VALUE
       The value returned is that of the converted letter, or c if the conversion was not possible.

*/

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c);
int	ft_tolower(int c);

int	main(void)
{
	int	c1;
	int	c2;
	int	c3;
	int	c4;

	c1 = 'a';
	c2 = 'a';
	c3 = 'Z';
	c4 = 'Z';
	printf("%c\n", ft_toupper(c1));
	printf("%c\n", toupper(c1));
	printf("%c\n", ft_tolower(c3));
	printf("%c\n", tolower(c4));
}
