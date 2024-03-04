/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:23:39 by marvin            #+#    #+#             */
/*   Updated: 2024/03/04 12:23:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_pchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(int n)
{
	int	i;
	int c;

	i = 0;
	c = 0;
	while (i < n)
	{
		ft_pchar(48 + c / 10);
		ft_pchar(48 + c % 10);
		ft_pchar(',');
		i++;
		c++;
	}
}

int main(void)
{
	ft_print_combn(8);
	return (0);
}
