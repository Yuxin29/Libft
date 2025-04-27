/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:40:19 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 11:39:51 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
	while (n / 10 > 1)
	{
		n /= 10;
		num++;
	}
	return (num);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	tens;
	int	first;
	int	nt;
	int	i;
	char	c;

	tens = ft_count_int(n);
	nt = n;
	i = 0;
	while (nt / 10 >= 1)
	{
		first = nt / ft_iterative_power(10, tens - i - 1);
		c  = first + '0';
		write(fd, &c, 1);
		nt = nt % ft_iterative_power(10, tens - i - 1);
		i++;
	}
	c  = nt + '0';
	write(fd, &c, 1);
}
