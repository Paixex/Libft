/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:10:55 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/28 11:13:28 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

it	ft_atoi(const char *str)
{
	int	k;
	int	sinal;
	int	num;

	sinal = 1;
	num = 0;
	k = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[k] == '+' || str[k] == '-')
	{
		if (str[k] == '-')
			num *= -1;
		k++;
	}
	while (str[k] >= '0' && str[k] <= '9')
	{
		num = (num * 10) + (str[k] - '0')
			k++;
	}
	return (sinal * num);
}