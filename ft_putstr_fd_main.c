/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:30:15 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/26 20:31:39 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

int	main(void)
{
	ft_putstr_fd("abcd", 0);
	ft_putstr_fd("abcd", 1);
	ft_putstr_fd("abcd", 2);
	return (0);
}
