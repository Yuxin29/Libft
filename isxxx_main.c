/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isxxx_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:31:14 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/15 18:31:24 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

SYNOPSIS
- isalnum()
checks for an alphanumeric character;
- isalpha()
checks for an alphabetic character; in the standard "C" locale, it is equivalent
to (isupper(c) || islower(c)).  In some locales, there may be additional charac‐
ters  for which isalpha() is true—letters which are neither uppercase nor lower‐
case.
- isascii()
checks whether c is a 7-bit unsigned char value that fits into the ASCII charac‐
ter set.
- isblank()
checks for a blank character; that is, a space or a tab.
- iscntrl()
checks for a control character.
- isdigit()
checks for a digit (0 through 9).
- islower()
checks for a lowercase character.
- isprint()
checks for any printable character including space.
- isspace()
checks for white-space characters.  In the "C" and "POSIX" locales,  these  are:
space,  form-feed ('\f'), newline ('\n'), carriage return ('\r'), horizontal tab
('\t'), and vertical tab ('\v').
- isupper()
checks for an uppercase letter.
- isxdigit()
checks for hexadecimal digits, that is, one of
0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F.

RETURN VALUE
       The values returned are nonzero if the character c falls into  the  tested  class,  and
       zero if not.

NOTES
       The standards require that the argument c for these functions is either EOF or a  value
       that is representable in the type unsigned char.  If the argument c is of type char, it
       must be cast to unsigned char, as in the following example:

#include <ctype.h>

