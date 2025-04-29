/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:00:39 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/20 11:03:34 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char const	*part1;
	char const	*part2;
	char		*result;

	part1 = "helloboy";
	part2 = "Itsarainyday";
	result = ft_strjoin(part1, part2);
	if (!result)
		return (0);
	printf("%s\n", result);
	free (result);
	return (0);
}
