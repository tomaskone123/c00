/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 15:09:59 by marvin            #+#    #+#             */
/*   Updated: 2024/03/03 15:09:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(int a, int b, bool last)
{
	print_char(48 + a / 10);
	print_char(48 + a % 10);
	print_char(' ');
	print_char(48 + b / 10);
	print_char(48 + b % 10);
	print_char(' ');
	if (last)
	{
		print_char(',');
		print_char(' ');
	}
}

void	ft_print_comb2(void)
{
	bool	last;
	int	a;
	int	b;

	a = 0;
	while(a <= 99)
	{
		b = a + 1;
		while(b <= 99)
		{
			last = !(a == 98 && b == 99);
			ft_print_comb(a, b, last);
			b++;
		}
		a++;
	}
}

// int main(void)
// {
// 	ft_print_comb2();
// }
