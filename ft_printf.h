/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:47:47 by aarchtou          #+#    #+#             */
/*   Updated: 2022/11/10 19:10:57 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_putchar(char c);
int		ft_puthex(int i);
int		ft_printf(const char *abdo, ...);
int		ft_puthexlong(size_t i);
int		ft_print(char *abdo, va_list arg);
int		ft_puthex1(int i);
int		ft_strlen(char	*ab);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);

#endif