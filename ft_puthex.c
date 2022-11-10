/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:04:08 by aarchtou          #+#    #+#             */
/*   Updated: 2022/11/10 19:02:16 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int i)
{
	int		len;
	int		a;
	int		b;
	char	*h;
	char	*bas;

	len = 0;
	b = i;
	a = 0;
	bas = "0123456789abcdef";
	while (b > 0 && a++ >= 0)
		b = b / 16;
	h = malloc(a + 1);
	h[a] = '\0';
	while (--a >= 0 && i > 0)
	{
		h[a] = bas[(i % 16)];
		i = i / 16;
		len++;
	}
	ft_putstr(h);
	free(h);
	return (len);
}

int	ft_puthex1(int i)
{
	int		len;
	int		a;
	int		b;
	char	*h;
	char	*bas;

	len = 0;
	b = i;
	a = 0;
	bas = "0123456789ABCDEF";
	while (b > 0 && a++ >= 0)
		b = b / 16;
	h = malloc(a + 1);
	h[a] = '\0';
	while (--a >= 0 && i > 0)
	{
		h[a] = bas[(i % 16)];
		i = i / 16;
		len++;
	}
	ft_putstr(h);
	free(h);
	return (len);
}

int	ft_puthexlong(size_t i)
{
	int		len;
	int		a;
	size_t	b;
	char	*h;
	char	*bas;

	len = 0;
	b = i;
	a = 0;
	bas = "0123456789abcdef";
	while (b > 0 && a++ >= 0)
		b = b / 16;
	h = malloc(a + 3);
	h[a + 2] = '\0';
	while ((--a + 2) >= 0 && i > 0)
	{
		h[a + 2] = bas[(i % 16)];
		i = i / 16;
		len++;
	}
	h[0] = '0';
	h[1] = 'x';
	ft_putstr(h);
	free(h);
	return (len);
}
