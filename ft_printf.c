/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:31:19 by aarchtou          #+#    #+#             */
/*   Updated: 2022/11/08 18:11:23 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *abdo, ...)
{
	va_list	arg;
	int		i;
	int		t;

	i = 0;
	t = 0;
	va_start(arg, abdo);
	while (abdo[i])
	{
		if (abdo[i] == '%')
		{
			
		}
		else
			t += ft_putchar(abdo[i]);
		i++;
	}
	return (t);
}

int main()
{
	ft_printf("a", 5);
	return (0);
}