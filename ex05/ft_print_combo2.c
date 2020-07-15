/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizungu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:45:01 by sizungu           #+#    #+#             */
/*   Updated: 2020/07/15 11:28:04 by sizungu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int n)
	{ write(1, &n, 2);
	}
void ft_print_digits(char a,char b)
	{
		ft_putchar(a);
		ft_putchar(b);

		ft_putchar(',');
	}

void ft_print_comb2(void)
	{
		char a = '0';
		char b = '0';
	
		while (a <= '9')
		{
			while (b <= '9')
			{
				ft_print_digits(a, b);
							
				b++;
			}
			b = '0';
			a++;
		}
		 ft_putchar('\n');
	}

int main()
{
	ft_print_comb2();
	return(0);
}
