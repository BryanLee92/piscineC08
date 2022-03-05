/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchin <chchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:13:33 by chchin            #+#    #+#             */
/*   Updated: 2022/03/02 18:13:35 by chchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	int			i;
	char		**strs;
	t_stock_str	*result_arr;

	strs = (char **)malloc(sizeof(char *) * 3);
	strs[0] = (char *)malloc(sizeof(char) * 6);
	strs[0] = "Hello";
	strs[1] = (char *)malloc(sizeof(char) * 6);
	strs[1] = "World";
	strs[2] = (char *)malloc(sizeof(char) * 3);
	strs[2] = "!!";
	result_arr = ft_strs_to_tab(3, strs);
	i = 0;
	while (i < 4)
	{
		printf("%d => size : %d, str : %s, copy : %s\n", i, result_arr[i].size, result_arr[i].str, result_arr[i].copy);
		i++;
	}
}
