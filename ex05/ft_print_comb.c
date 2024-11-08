/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-lim <rode-lim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:48:42 by rode-lim          #+#    #+#             */
/*   Updated: 2024/11/08 16:49:25 by rode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	one;
	char	two;
	char	three;

	one = '0';
	two = '0';
	three = '0';
	while (one <= '9')
	{
		two = one + 1;
		while (two <= '9')
		{
			three = two + 1;
			while (three <= '9')
			{
				print_comb(one, two, three);
				three++;
			}
			two++;
		}
		one++;
	}
}

// int	main()
// {
// 	ft_print_comb();
// }