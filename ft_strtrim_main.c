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

#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char const	*l_str;
	char const	*s_str;

	l_str = "Summer how is your day is today a rainy day";
	s_str = "is";
	printf("%s\n", ft_strtrim(l_str, s_str));
	return (0);
}
