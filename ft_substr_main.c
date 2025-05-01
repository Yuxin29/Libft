/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:49:01 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/19 17:54:54 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	const char		*test;
	unsigned int	s;
	size_t			n;
	char			*result;

	test = "summer how is youday";
	s = 7;
	n = 10;
	result = ft_substr(test, s, n);
	if (!(result))
		return (0);
	printf("%s\n", result);
	free(result);
	return (0);
}
