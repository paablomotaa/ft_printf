/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 09:21:18 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/21 11:05:16 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_char(char c);
int	ft_printf(const char *str, ...);
int	ft_print_hex(unsigned int nb, char c);
int	ft_print_nbr(int nb);
int	ft_print_pointer(void *c);
int	ft_print_str(char *str);
int	ft_print_unsigned(unsigned int n);

#endif
