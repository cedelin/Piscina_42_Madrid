/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <caroldev@outlook.es>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 22:40:37 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/03/04 15:38:12 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i > 96)
	{
		write(1, &i, 1);
		i--;
	}
}