/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:51:08 by digil-pa          #+#    #+#             */
/*   Updated: 2022/11/11 20:38:37 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_letter_count(char const *s, char c)
{
	size_t k;
	
	k = 0;
	while (s[k] != '\0' && s[k] != c)
		k++;~
	return (k);
}

static int	ft_word__count(char const *s, char c)
{
	int	k;
	int	onof;
	int	word;

	k = 0;
	onof = 1;
	word = 0;
	while (s[k] != '\0')
	{
		if (onof == 1 && s[k] != c)
		{
			k++;
			onof = 0;
		}
		else if (s[k] == c)
			onof = 1;
		k++;
	}
	return (word);
}

static char	*ft_stralloc(char **strs, char const *s, int *i, char c)
{
	int		k;
	char	*str;

	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_letter_count(s + *i, c) + ));
}
char **ft_split(char const *s, char c)
{
	
}
