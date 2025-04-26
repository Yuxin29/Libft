/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:34:30 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/26 18:26:07 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

int		ft_iterative_power(int nb, int power);
char	*ft_itoa(int n);

int	main(void)
{
	int		nb;
	char	*nb_char;

	nb = -345;
	nb_char = ft_itoa(nb);
	printf("%s\n", nb_char);
	free (nb_char);
	return (0);
}
