/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:23:20 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/27 15:05:47 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sting.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	k;
	unsigned char	*l;
	unsigned char	*j;

	l = (char *)s1;
	j = (char *)s2;
	k = 0;
	while (k < n)
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
		k++;
	}
	return (NULL);
}
