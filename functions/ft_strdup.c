/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:19:25 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/30 18:19:42 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft:h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	i;

	i = ft_strlen(s) + 1;
	dst = malloc(sizeof(char) * i);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s, i);
	return (dst);
}