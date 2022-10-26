/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:16:02 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/26 17:06:27 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	k;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	j = dlen;
	k = 0;
	if (dlen < size - 1 && size > 0)
	{
		while (k + j <= size - 1 && src[k])
		{
			dest[j] = src[k];
			j++;
			k++;
		}
		dest[j] = '\0';
	}
	if (dlen >= size)
		dlen = size;
	return (dlen + slen);
}
