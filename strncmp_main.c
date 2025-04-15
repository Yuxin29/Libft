NAME
       strcmp, strncmp - compare two strings

DESCRIPTION
       The  strcmp()  function compares the two strings s1 and s2.  The locale
       is not taken into account (for  a  locale-aware  comparison,  see  str‐
       coll(3)).  The comparison is done using unsigned characters.

       strcmp() returns an integer indicating the result of the comparison, as
       follows:

       • 0, if the s1 and s2 are equal;
       • a negative value if s1 is less than s2;
       • a positive value if s1 is greater than s2.

       The strncmp() function is similar, except it compares  only  the  first
       (at most) n bytes of s1 and s2.

RETURN VALUE
       The strcmp() and strncmp() functions return an integer less than, equal
       to, or greater than zero if s1 (or the first n bytes thereof) is found,
       respectively, to be less than, to match, or be greater than s2.


#include <string.h>

int	main(void)
{
	int	n;
	int	r;

	n = 6;
	s1[] = "hellosummer";
	s2[] = "helloseven";
	r == 	
}
