/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 20:36:33 by sboudcha          #+#    #+#             */
/*   Updated: 2025/11/18 23:48:28 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_invalid(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}

static int	ft_type_check(char c, va_list args)
{
	if (!c)
		return (-1);
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'u')
		return (ft_unsigned(va_arg(args, int)));
	else if (c == 'x')
		return (ft_lowhex(va_arg(args, int)));
	else if (c == 'X')
		return (ft_upphex(va_arg(args, int)));
	else if (c == 'p')
		return (ft_adresse(va_arg(args, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (ft_print_invalid(c));
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && !format[i + 1])
			return (-1);
		if (format[i] == '%')
			count = count + ft_type_check(format[++i], args);
		else
		{
			ft_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
