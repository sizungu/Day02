/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizungu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:12:33 by sizungu           #+#    #+#             */
/*   Updated: 2020/07/13 13:58:38 by sizungu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c);

void ft_print_alphabet2(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter); 
		letter++;
	}
		ft_putchar('\n');
	
}
void ft_putchar(char c)
{ write(1, &c, 1);
}

int main(void)
{
	ft_print_alphabet2();
	return(0);
}
