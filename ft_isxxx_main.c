/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxxx_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:31:14 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/15 18:31:24 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

SYNOPSIS
       int isalnum(int c);
       int isalpha(int c);
       int iscntrl(int c);
       int isdigit(int c);
       int isgraph(int c);
       int islower(int c);
       int isprint(int c);
       int ispunct(int c);
       int isspace(int c);
       int isupper(int c);
       int isxdigit(int c);

       int isascii(int c); checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
       int isblank(int c);

 DESCRIPTION
       These functions check whether c, which must have the value of an unsigned char or EOF, falls into
       a certain character class according to the specified locale.  The functions without the "_l" suf‐
       fix perform the check based on the current locale.
       
RETURN VALUE
       The values returned are nonzero if the character c falls into the tested class, and zero if not.
*/

#include <ctype.h>
#include <stddef.h>
#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

int	main(void)
{
	int	c1 = 'a';
	int	c2 = '1';
	int	c3 = '/';
	int	c4 = ' ';
	
	printf("test_isalpha\n");
	printf("%i\n", ft_isalpha(c1));
	printf("%i\n", isalpha(c1));
	printf("%i\n", ft_isalpha(c2));
	printf("%i\n", isalpha(c2));
	printf("\n");
	printf("test_isdigit\n");
	printf("%i\n", ft_isdigit(c1));
	printf("%i\n", isdigit(c1));
	printf("%i\n", ft_isdigit(c2));
	printf("%i\n", isdigit(c2));
	printf("\n");
	printf("test_isalnum\n");
	printf("%i\n", ft_isalnum(c1));
	printf("%i\n", isalnum(c2));
	printf("%i\n", ft_isalnum(c1));
	printf("%i\n", isalnum(c2));
	printf("%i\n", ft_isalnum(c3));
	printf("%i\n", isalnum(c3));
	printf("\n");
	printf("test_isprint\n");
	printf("%i\n", ft_isprint(c3));
	printf("%i\n", isprint(c3));
	printf("%i\n", ft_isprint(c4));
	printf("%i\n", isprint(c4));
	printf("\n");
	return (0);
}
