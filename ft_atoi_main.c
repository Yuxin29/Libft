/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:38:09 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/17 15:40:55 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       atoi, atol, atoll - convert a string to an integer

SYNOPSIS
       int atoi(const char *nptr);
       long atol(const char *nptr);
       long long atoll(const char *nptr);

DESCRIPTION
       The atoi() function converts the initial portion of the string 
       pointed to by nptr to int.  
       The behavior is the same as strtol(nptr, NULL, 10);

       except that atoi() does not detect errors.

       The  atol()  and  atoll()  functions  behave the same as atoi(), 
       except that they convert the initial portion of the string to
       their return type of long or long long.

RETURN VALUE
       The converted value or 0 on error.
*/

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
	const char	*test;

	test = "   +188888888888882346ashd ";
	printf("%d\n", atoi(test));
	printf("%d\n", ft_atoi(test));
	return (0);
}
