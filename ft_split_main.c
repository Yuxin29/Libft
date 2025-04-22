/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:05:24 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/22 20:07:30 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

size_t	ft_count_total_strs(char const *s, char c);
char	*ft_showlength_eachstr(char const *s, char c);
char	**ft_split(char const *s, char c);

int	main(void)
{
	char const	test[12] = "aaa1aa1a1aaa";
	char		c = '1';
	
	size_t		count_strs;
	char		*lengthof_eachstr;
	char		**strs_of_strs;
	
	int		strs = 0;
	
	count_strs = ft_count_total_strs(test, c);
	lengthof_eachstr = ft_showlength_eachstr(test, c);
	strs_of_strs = ft_split(test, c);
	
	printf("testing_process\n");
	printf("%zu\n", count_strs);
	printf("%s\n", lengthof_eachstr);
	while (strs < count_strs)
	{
		printf("%s\n", strs_of_strs[strs]);
		strs++;
	}
	return (0);
}
