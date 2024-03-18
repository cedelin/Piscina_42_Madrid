/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 01:13:37 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/29 02:22:10 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	y;
	int	x;

	x = ac -1;
	while (ac > 1)
	{
		y = 0;
		while (av[x][y] != 0)
		{
			write(1, &av[x][y], 1);
			y++;
		}
		x--;
		write(1, "\n", 1);
		ac--;
	}
	return (0);
}
