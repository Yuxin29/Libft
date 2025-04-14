

char *strchr(const char *s, int c);
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (c == '\0')
		return(s[i])
	while (*s)
	{
		if (*s != c)
			s++;
		else if (*s == c)
			return (*s)
	}
	return NULL;
}

DESCRIPTION
       The strrchr() function returns a pointer to the last occurrence of
       the character c in the string s.

       The strchrnul() function is like strchr() except that if c is not
       found in s, then it returns a pointer to the null byte at the end
       of s, rather than NULL.

RETURN VALUE       
       The strchr() and strrchr() functions return a pointer to the
       matched character or NULL if the character is not found.  The
       terminating null byte is considered part of the string, so that if
       c is specified as '\0', these functions return a pointer to the
       terminator.
