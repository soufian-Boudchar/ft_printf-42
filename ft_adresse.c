/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 23:40:45 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/19 15:14:36 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adresse(void *adr)
{
	char			*base_16;
	char			arr[21];
	int				i;
	int				count;
	unsigned long	num;

	count = 0;
	num = (unsigned long)adr;
	if (num == 0)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	base_16 = "0123456789abcdef";
	i = 0;
	while (num > 0)
	{
		arr[i++] = base_16[num % 16];
		num /= 16;
	}
	count += i;
	while (i > 0)
		ft_putchar(arr[--i]);
	return (count);
}
