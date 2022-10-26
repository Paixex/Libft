/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:17:17 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/26 17:08:06 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*strrchr(char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	if (!s)
	{
		return (NULL);
	}
	while (s[slen])
	{
		if (s[slen] == (char *)c)
		{
			return ((char *)(c + k));
		}
		slen--;
	}
	if (s[slen] == (char)c)
	{
		return ((char *)(s + k));
	}
	return (NULL);
}
