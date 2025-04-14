
int strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while(*s1) && (*s2) && (*s1 !=*s2) && (i < n)
	{
		i++;
		s1++;
		s2++;
	}
	return(*s1 - *s2)
}

DESCRIPTION
       The strncmp() function shall compare not more than n bytes (bytes
       that follow a NUL character are not compared) from the array
       pointed to by s1 to the array pointed to by s2.

RETURN VALUE
       Upon successful completion, strncmp() shall return an integer
       greater than, equal to, or less than 0, if the possibly null-
       terminated array pointed to by s1 is greater than, equal to, or
       less than the possibly null-terminated array pointed to by s2
       respectively.
