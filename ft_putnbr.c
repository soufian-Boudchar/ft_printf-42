/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 06:29:22 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/18 10:06:06 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_nbr(int n, int count)
{
	char	arr[10];
	int		i;

	i = 0;
	while (n > 0)
	{
		arr[i++] = (n % 10) + '0';
		n /= 10;
	}
	count += i;
	while (i > 0)
	{
		i--;
		ft_putchar(arr[i]);
	}
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (n == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		count++;
	}
	return (print_nbr(n, count));
}
