/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:18:12 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/21 11:28:22 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nb, char c)
{
	char	*hex;
	int		i;

	i = 0;
	if (c == 'x')
		hex = "0123456789abcdef";
	else if (c == 'X')
		hex = "0123456789ABCDEF";
	else
		return (0);
	if (nb >= 16)
		i += ft_print_hex(nb / 16, c);
	i += ft_print_char(hex[nb % 16]);
	return (i);
}
