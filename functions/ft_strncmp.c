/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:30:40 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/26 17:07:56 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	k;

	k = 0;
	if (!s1)
		return (NULL);
	while (s1[k] != '\0' && k < n -1 && s1[k] == s2[k])
	{
		k++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
