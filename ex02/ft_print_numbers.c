/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizungu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:12:33 by sizungu           #+#    #+#             */
/*   Updated: 2020/07/16 16:56:47 by sizungu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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
                                         
