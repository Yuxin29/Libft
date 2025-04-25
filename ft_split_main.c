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
	size_t		count_strs;
	char		*lengthof_eachstr;
	char		**strs_of_strs;

	count_strs = ft_count_total_strs("aa&bbb&ddddd", '&');
	lengthof_eachstr = ft_showlength_eachstr("aa&bbb&ddddd", '&');
	strs_of_strs = ft_split("aa&bbb&ddddd", '&');
	printf("testing_process\n");
	printf("%zu\n", count_strs);
	printf("%s\n", lengthof_eachstr);
	while (*strs_of_strs)
	{
		printf("%s\n", *strs_of_strs);
		strs_of_strs++;
	}
	return (0);
}
