/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:17:02 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/21 11:26:26 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	size;

	size = 0;
	if (n > 9)
		size += ft_print_unsigned(n / 10);
	size += ft_print_char((n % 10) + '0');
	return (size);
}
