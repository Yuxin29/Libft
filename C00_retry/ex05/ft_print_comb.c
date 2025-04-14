/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:25:33 by yuwu              #+#    #+#             */
/*   Updated: 2025/03/03 19:41:25 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_nbr(char i, char j, char k)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	return (0);
}

void	ft_print_comb(void)
{
	char	first;
	char	secon;
	char	third;

	first = '0';
	secon = '1';
	third = '2';
	while (first <= '9')
	{	
		while (secon <= '9')
		{
			while (third <= '9')
			{
				ft_print_nbr(first, secon, third);
				third++;
				if (!((first == '7') && (secon == '8')))
					write(1, ", ", 2);
			}
			secon++;
			third = secon + 1;
		}
		first++;
		secon = first + 1;
		third = secon + 1;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
