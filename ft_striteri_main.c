/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:49:30 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/26 19:52:27 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_capitalize(unsigned int i, char *c)
{
	(void) i;
	if ((*c >= 'a') && (*c <= 'z'))
		*c -= 32;
}

int	main(void)
{
	char	test[5] = "abcde";

	ft_striteri(test, &ft_capitalize);
	printf("%s\n", test);
	return (0);
}
