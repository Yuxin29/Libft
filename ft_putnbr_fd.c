/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:40:19 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/28 19:30:52 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_power(int nb, int power)
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

void	ft_putnbr_fd(int n, int fd)
{
	int		tens;
	int		first;
	int		nt;
	int		i;
	char	c;

	tens = 1;
	nt = n;
	while (n / 10 > 1)
	{
		n /= 10;
		tens++;
	}
	i = 0;
	while (nt / 10 >= 1)
	{
		first = nt / ft_power(10, tens - i - 1);
		c = first + '0';
		write(fd, &c, 1);
		nt = nt % ft_power(10, tens - i - 1);
		i++;
	}
	c = nt + '0';
	write(fd, &c, 1);
}
