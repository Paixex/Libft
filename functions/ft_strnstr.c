/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:41:18 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/26 17:28:00 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		k;
	size_t	little_len;

	k = 0;
	if (*big == NULL || *little == NULL)
		return (NULL);
	/*if (0 == (needle_len = strnlen(needle, len)))
                return (char *)haystack;*/
	while (k <= (int)(len - little_len))
	{
		if (big[0] == little[0] && (0 == ft_strncmp(big, little, little_len)))
			return ((char *)big);
		k++;
		big++;
	}
}
