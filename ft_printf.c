/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:16:13 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/21 11:24:16 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formatted(char c, va_list args);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		printed;

	printed = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			printed += ft_formatted(*str, args);
		}
		else
			printed += write(1, str, 1);
		str++;
	}
	va_end(args);
	return (printed);
}

static int	ft_formatted(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	if (c == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	if (c == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	if (c == 'd' || c == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	if (c == 'x' || c == 'X')
		return (ft_print_hex(va_arg(args, int), c));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}
