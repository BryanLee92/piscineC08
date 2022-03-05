/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <brlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:32:12 by brlee             #+#    #+#             */
/*   Updated: 2022/03/03 18:16:25 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr >= 10)
		{
			ft_putnbr(nbr / 10);
			nbr = nbr % 10;
		}
		if (nbr < 10)
		{
			ft_putchar(nbr + 48);
		}
	}
}

void	ft_print_words_tab(char *tab)
{
	int	index;

	index = 0;
	while (tab[index])
	{
		ft_putchar(tab[index]);
		index++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_print_words_tab(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_print_words_tab(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
