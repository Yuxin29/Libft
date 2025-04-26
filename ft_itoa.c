/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:50:31 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/20 14:31:01 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_iterative_power(int nb, int power)
{
	int	multi;

	multi = 1;
	if (power < 0)
		return (0);
	if ((nb == 0) && (power == 0))
		return (1);
	while (power >= 1)
	{
		multi *= nb;
		power--;
	}
	return (multi);
}

int	ft_count_int(int n)
{
	int	num;

	num = 1;
	while (n / 10 >= 1)
	{
		n /= 10;
		num++;
	}
	return (num);
}

char	*ft_itoa_positive(int n)
{
	int		i;
	int		size;
	char	*result;
	int		power;

	i = 0;
	size = ft_count_int(n);
	result = malloc(sizeof(char) * (size + 1));
	if (!(result))
		return (NULL);
	while (i < size)
	{
		power = ft_iterative_power(10, (size - i - 1));
		result[i] = n / power + '0';
		n = n % power;
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	char	*minus;
	char	*special;

	minus = "-";
	if (n == -2147483648)
	{
		special = malloc(sizeof(char) * 12);
		if (!(special))
			return (NULL);
		ft_strcpy(special, "-2147483648");
		return (special);
	}	
	if (n < 0)
		return (ft_strjoin(minus, ft_itoa_positive(-n)));
	return (ft_itoa_positive(n));
}
