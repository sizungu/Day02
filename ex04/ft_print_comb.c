/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizungu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:45:01 by sizungu           #+#    #+#             */
/*   Updated: 2020/07/16 16:59:26 by sizungu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_putchar(int n)
	{ write(1, &n, 3);
	}	
void ft_print_digits(char a,char b,char c)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);

		ft_putchar(',');
		ft_putchar(',');
	}

void ft_print_comb(void)
	{
		char a = '0';
		char b = '0';
		char c = '0';
	
		 while (a <= '9')
		{ 
			while (b <= '9')
			{ 
				while (c <= '9')
				{ 
					if (a < b && b < c )
					{
						ft_print_digits(a, b, c);
					}
					c++;
				}
				c = '0';
				b++;
			}
			b = '0';
			a++;
		}
		 ft_putchar('\n');
	}

