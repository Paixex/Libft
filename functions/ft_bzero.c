/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:52:16 by digil-pa          #+#    #+#             */
/*   Updated: 2022/10/26 17:23:00 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	char	*c;
	size_t	k;

	*c = s;
	k = 0;
	while (k < n)
	{
		c[k] = '\0';
		k++;
	}
}
