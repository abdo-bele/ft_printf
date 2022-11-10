/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:31:19 by aarchtou          #+#    #+#             */
/*   Updated: 2022/11/10 19:35:31 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(char *abdo, va_list arg)
{
	int	i;

	i = 0;
	if (*abdo == 'd')
		i += ft_putnbr(va_arg(arg, int));
	if (*abdo == 's')
		i += ft_putstr(va_arg(arg, char *));
	if (*abdo == 'c')
		i += ft_putchar(va_arg(arg, int));
	if (*abdo == 'p')
		i += ft_puthexlong(va_arg(arg, size_t));
	if (*abdo == 'i')
		i += ft_putnbr(va_arg(arg, int));
	if (*abdo == 'x')
		i += ft_puthex(va_arg(arg, unsigned int));
	if (*abdo == 'X')
		i += ft_puthex1(va_arg(arg, unsigned int));
	if (*abdo == 'u')
		i += ft_putnbr(va_arg(arg, int));
	return (i);
}

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
			t += ft_print((char *)&abdo[i + 1], arg);
			i++;
		}
		else
			t += ft_putchar(abdo[i]);
		i++;
	}
	return (t);
}

// int	main(void)
// {
// 	int a;
// 	a = 5;
// 	ft_printf("%p\n",&a);
// 	printf("%p",&a);
// 	return (0);
// }
