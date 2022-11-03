/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:17:17 by digil-pa          #+#    #+#             */
/*   Updated: 2022/11/03 13:45:13 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	slen;

	slen = ft_strlen(s);
	if (!s)
	{
		return (NULL);
	}
	while (s[slen])
	{
		if (s[slen] == (unsigned char)c)
		{
			return ((char *)(s));
		}
		slen--;
	}
	if (s[slen] == (unsigned char)c)
	{
		return ((char *)(s));
	}
	return (NULL);
}
