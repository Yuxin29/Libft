/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:10:53 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/26 20:14:52 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
0: std input; 1: std output; 2: std error
*/

#include <unistd.h>

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	ft_putchar_fd('a', 0);
	write(1, "\n", 1);
	ft_putchar_fd('a', 1);
	write(1, "\n", 1);
	ft_putchar_fd('a', 2);
	write(1, "\n", 1);
	return (0);
}
