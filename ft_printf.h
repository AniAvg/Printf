/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavagya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:01:14 by anavagya          #+#    #+#             */
/*   Updated: 2025/02/06 13:46:34 by anavagya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_c(char c);
int	ft_print_s(char *s);
int	ft_print_d(int n);
int	ft_print_p(void *ptr);
int	ft_print_u(unsigned int n);
int	ft_print_x(unsigned long n, char c);

#endif
