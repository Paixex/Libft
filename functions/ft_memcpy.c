/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:00:18 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/27 12:14:58 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			k;

	if (!dst && !src)
		return (NULL);
	d = (char *)dest;
	s = (char *)src;
	k = 0;
	while (k < n)
	{
		d[k] = s[k];
		k++;
	}
	return (d);
}
