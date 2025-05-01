/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:20:20 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/26 19:33:03 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	ft_capitalize(unsigned int i, char c)
{
	(void) i;
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}

int	main(void)
{
	char	*result;

	result = ft_strmapi("abcde", &ft_capitalize);
	printf("%s\n", result);
	free (result);
	return (0);
}
