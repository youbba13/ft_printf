/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:09:16 by ybouaoud          #+#    #+#             */
/*   Updated: 2023/11/25 23:34:28 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long num)
{
	if (num == 0)
	{
		ft_putstr("0x0");
		return (3);
	}
	write(1, "0x", 2);
	return (ft_printhex(num, 'x'));
}