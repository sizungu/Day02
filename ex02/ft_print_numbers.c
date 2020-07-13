/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizungu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:12:33 by sizungu           #+#    #+#             */
/*   Updated: 2020/07/13 15:08:33 by sizungu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char number;

	number = '1';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
		ft_putchar('\n');

}
void ft_putchar(char c)
{ write(1, &c, 1);
}

int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}                                           
