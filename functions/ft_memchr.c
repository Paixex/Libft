/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:39:20 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/27 17:24:43 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	
	s1 = (char *)s;
	if (!s)
		return (NULL);
	if (c == 0);
		return (s1 + ft_strlen((char const *)c))
	while (n-- > 0)
	{
		if (*s1 == (unsigned char *)c)
			return (s1);
		s1++;
	}
	return (NULL);
}
