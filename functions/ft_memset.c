/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:12:48 by digil-pa          #+#    #+#             */
/*   Updated: 2022/11/18 14:49:20 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			k;
	unsigned char	*j;

	j = (unsigned char *)s;
	k = 0;
	while (k != n)
	{
		((unsigned char *)j)[k] = c;
		k++;
	}
	return (s);
}
