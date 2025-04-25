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
size_t	*ft_showlength_eachstr(char const *s, char c);
char	**ft_split(char const *s, char c);

int	main(void)
{
	size_t		count_strs;
	size_t		*lengthof_eachstr;
	char		**strs_of_strs;
	size_t		n;
	
	count_strs = ft_count_total_strs("aa&bbb&ddddd", '&');
	lengthof_eachstr = ft_showlength_eachstr("aa&bbb&ddddd", '&');
	strs_of_strs = ft_split("aa&bbb&ddddd", '&');
	printf("print_number_of_substrs\n");
	printf("%zu\n", count_strs);
	printf("print_length_of_substrs\n");
	n = 0;
	while (n < count_strs)
	{
		printf("%zu\n", lengthof_eachstr[n]);
		n++;
	}
	printf("print_substrs\n");
	n = 0;
	while (strs_of_strs[n])
    	{
        	printf("%s\n", strs_of_strs[n]);
        	n++;
    	}
	return (0);
}
