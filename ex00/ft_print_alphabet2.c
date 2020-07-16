/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizungu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:12:33 by sizungu           #+#    #+#             */
/*   Updated: 2020/07/16 16:55:01 by sizungu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

