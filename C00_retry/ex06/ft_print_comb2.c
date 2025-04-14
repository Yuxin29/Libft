/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:38:41 by yuwu              #+#    #+#             */
/*   Updated: 2025/03/03 20:51:16 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_xx0xx(char I, char J, char M, char N)
{
	write(1, &I, 1);
	write(1, &J, 1);
	write(1, " ", 1);
	write(1, &M, 1);
	write(1, &N, 1);
	return (0);
}

void	ft_print_last2(void)
{
	char	i;
	char	j;
	char	m;
	char	n;

	i = '0';
	j = '0';
	m = '0';
	n = '0';
	while (m < '9')
	{
		while (n <= '9')
		{	
			ft_print_xx0xx(i, j, m, n);
			write(1, ", ", 2);
			n++;
		}
		m++;
		n = m + 1;
	}
}
void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	m;
	char	n;

	i = '0';
	j = '0';
	m = '0';
	n = '0';
	while (j < '9')
	{
		ft_print_last2();
		j++;
		m = '0';
		n = '0';
	}
	j++;
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
