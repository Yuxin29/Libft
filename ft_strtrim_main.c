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

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char const	l_str[100] = "sas  aSummer how is your day  sas";
	char const	s_str[2] = "as";
	char		*result;

	result = ft_strtrim(l_str, s_str);
	printf("%s\n", result);
	free (result);
	return (0);
}
