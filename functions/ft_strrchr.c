/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:17:17 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/25 23:05:57 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(char *s, int c)
{
	int	slen;
	int	k;

	slen = ft_strlen(s);

	k = 0;
	if (!s)
	{
		return (NULL);
	}
	while (s[k]) //usar slen em vez de k?
	{
		if (s[k] == (char *)c)
		{
			return ((char *)(c + k));
		}
		k--;
	}
	if (s[k] == (char)c)
	{
		return ((char *)(s + k));
	}
	return (NULL);
}

	/*int	k;

	k = 0;
	while (str(k) != '\0')
	{
		k++;
	}
	return (k);*/

