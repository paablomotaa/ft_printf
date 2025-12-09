/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:03:09 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/21 11:25:49 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hexpoint(unsigned long long n)
{
	int	size;

	size = 0;
	if (n >= 16)
		size += ft_print_hexpoint(n / 16);
	size += write(1, &"0123456789abcdef"[n % 16], 1);
	return (size);
}

int	ft_print_pointer(void *c)
{
	unsigned long long	address;
	int					i;

	address = (unsigned long long)c;
	i = 0;
	if (c == 0)
		return (ft_print_str("(nil)"));
	i += ft_print_str("0x");
	i += ft_print_hexpoint(address);
	return (i);
}
