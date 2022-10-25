/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:01:40 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/25 22:23:24 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	k;

	k = 0;
	if (!s)
	{
		return (NULL);
	}
	while (s[k])
	{
		if (s[k] == (char *)c)
		{
			return ((char *)(c + k));
		}
		k++;
	}
	if (s[k] == (char)c)
	{
		return ((char *)(s + k));
	}
	return (NULL);
}
