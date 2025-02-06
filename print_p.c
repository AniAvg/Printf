/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anavagya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:44:04 by anavagya          #+#    #+#             */
/*   Updated: 2025/02/06 13:52:42 by anavagya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
	{
		write(1, "0x0", 3);
		return (3);
	}
	len += write(1, "0x", 2);
	len += ft_print_x((unsigned long)ptr, 'x');
	return (len);
}
