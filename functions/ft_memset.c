/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:12:48 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/27 12:16:43 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			k;
	unsigned char	*j;

	j = (char *)s;
	k = 0;
	if (!j[k])
		return (NULL);
	while (k != n)
	{
		j[k] = c;
		k++;
	}
	return (s);
}
