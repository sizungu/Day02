/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizungu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:45:01 by sizungu           #+#    #+#             */
/*   Updated: 2020/07/16 17:00:28 by sizungu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


