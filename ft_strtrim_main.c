/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:54:41 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/20 11:57:45 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

size_t	ft_trim_start(char const *s1, char const *set);
size_t	ft_trim_end(char const *s1, char const *set);
char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char const	l_str[100] = "sas  aSummer how is your day  zsas";
	char const	s_str[3] = "as";
	char		*result;

	result = ft_strtrim(l_str, s_str);
	printf("%zu\n", ft_trim_start(l_str, s_str));
	printf("%zu\n", ft_trim_end(l_str, s_str));
	printf("%s\n", result);
	free (result);
	return (0);
}
