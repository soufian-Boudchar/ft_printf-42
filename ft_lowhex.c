/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 21:39:19 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/19 15:17:54 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lowhex(unsigned int hex)
{
	char	*base_16;
	char	arr[10];
	int		i;
	int		count;

	base_16 = "0123456789abcdef";
	i = 0;
	if (hex == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (hex > 0)
	{
		arr[i++] = base_16[hex % 16];
		hex /= 16;
	}
	count = i;
	while (i > 0)
		ft_putchar(arr[--i]);
	return (count);
}
