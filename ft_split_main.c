/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:05:24 by yuwu              #+#    #+#             */
/*   Updated: 2025/05/01 19:57:50 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	char		**strs_of_strs;
	size_t		n;

	strs_of_strs = ft_split("&&&aa&bbb&ddddd&&", '&');
	n = 0;
	while (strs_of_strs[n])
	{
		printf("%s\n", strs_of_strs[n]);
		n++;
	}
	free (strs_of_strs[0]);
	free (strs_of_strs[1]);
	free (strs_of_strs[2]);
	return (0);
}
