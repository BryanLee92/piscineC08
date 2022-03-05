/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brlee <brlee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:48:18 by brlee             #+#    #+#             */
/*   Updated: 2022/03/03 16:43:00 by brlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	dest = NULL;
	size = 0;
	dest = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = 0;
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*dest;
	int			i;

	dest = malloc(sizeof(t_stock_str) * (ac + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		i += 1;
	}
	dest[i].size = 0;
	dest[i].str = 0;
	dest[i].copy = 0;
	return (dest);
}
