/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digil-pa <digil-pa@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 08:28:17 by digil-pa          #+#    #+#             */
/*   Updated: 2022/11/10 08:46:55 by digil-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	k;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		k = (unsigned int)(n * -1);
	}
	else
		k = (unsigned int)n;
	if (k >= 10)
		ft_putnbr_fd(k / 10, fd);
	ft_putchar_fd((char)(k % 10 + 48), fd);
}