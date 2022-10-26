/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:16:00 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/26 17:07:06 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	k;

	k = 0;
	while ((src[k]) != '\0' && (k < size))
	{
		dest[k] = src[k];
		k++;
	}
	while (k < size)
	{
	dest[k] = '\0';
	k++;
	}
	return (dest);
}
