/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:06:22 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/21 11:08:46 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int nb)
{
	long int	n;
	int			i;

	n = nb;
	i = 0;
	if (n < 0)
	{
		ft_print_char('-');
		n *= -1;
		i++;
	}
	if (n > 9)
	{
		i += ft_print_nbr(n / 10);
		i += ft_print_nbr(n % 10);
	}
	else
	{
		ft_print_char(n + '0');
		i++;
	}
	return (i);
}
