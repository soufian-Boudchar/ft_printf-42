/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upphex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 22:48:12 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/19 15:18:24 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upphex(unsigned int hex)
{
	char	*base_16;
	char	arr[10];
	int		i;
	int		count;

	base_16 = "0123456789ABCDEF";
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
