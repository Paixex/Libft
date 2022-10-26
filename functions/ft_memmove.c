/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:37:34 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/26 22:40:18 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			k;

	d = dest;
	s = src;
	k = 0;
	while (d[k] != '\0' && k < n || d[k] == s[k]) //tirar? "d[k] != '\0'"??
	{
		d[k] = s[k];
		k++;
	}
	return (d);
}
