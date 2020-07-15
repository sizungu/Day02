/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizungu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:18:32 by sizungu           #+#    #+#             */
/*   Updated: 2020/07/15 10:37:55 by sizungu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

 void ft_putchar(char c)
{	write(1, &c, 1);
}

void ft_is_negative(int n)
{ 
	if (n < 0)
	{ ft_putchar('N');
	}
	else if (n >= 0)
	{	ft_putchar('P');
	}
	ft_putchar('\n');
	
}

int main()
{
	ft_is_negative(-3);
	return(0);
}
