/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:37:34 by digil-pa          #+#    #+#             */
/*   Updated: 2022/11/03 15:55:41 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	s = (char *) src;
	d = dest;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy (d, s, n);
	return (dest);
}
