/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 20:20:47 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/17 23:25:01 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	char	arr[10];
	int		i;
	int		count;

	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	i = 0;
	while (n > 0)
	{
		arr[i++] = (n % 10) + '0';
		n /= 10;
	}
	count = i;
	while (i > 0)
	{
		i--;
		ft_putchar(arr[i]);
	}
	return (count);
}
