/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:45:49 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/05 21:14:25 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
// 	Function called with varying number of arguments of varying types
// 	void va_start(va_list ap, last)
// 		-> last: last parameter of which calling function knows the type
// 		-> ap: va_list to initialize
// 	void type va_arg(va_list ap, type)
// 		-> ap: va_list initialized by va_start()
// 		-> type: a type name specified
// 		-> each call modifies ap so that next call returns next argument
// 	void va_end(va_list ap)
// 		-> signlas there are no further args
// 		-> causes ap to be invalidated
// 		-> va_start() must be matched by va_end() from within same funtion

#include "libft.h"

// Converts from (long) integer to string
static void	f_itoa(long int num, char *base, int n, int *cnt)
{
	if (num < 0)
	{
		num *= -1;
		*cnt += write(1, "-", 1);
	}
	if (num >= n)
		f_itoa(num / n, base, n, cnt);
	*cnt += 1;
	ft_putchar_fd(base[num % n], 1);
}

// Converts from (long) unsigned integer to string
static void	f_utoa(long unsigned int num, char *base, unsigned int n, int *cnt)
{
	if (num >= n)
		f_utoa(num / n, base, n, cnt);
	*cnt += 1;
	ft_putchar_fd(base[num % n], 1);
}

// Prints either string or pointer converted to string
static void	f_str(va_list args, int *cnt, int pointer)
{
	char	*tmp;

	if (pointer == 0)
	{
		tmp = va_arg(args, char *);
		if (!tmp)
		{
			*cnt += write(1, "(null)", 6);
			return ;
		}
		*cnt += write(1, tmp, ft_strlen(tmp));
	}
	else if (pointer == 1)
	{
		*cnt += write(1, "0x", 2);
		f_utoa(va_arg(args, long unsigned int), "0123456789abcdef", 16, cnt);
	}
}

// Differentiates between the different identifiers
static void	f_identify(char c, va_list args, int *cnt)
{
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		*cnt += 1;
	}
	else if (c == '%')
		*cnt += write(1, "%", 1);
	else if (c == 's')
		f_str(args, cnt, 0);
	else if (c == 'p')
		f_str(args, cnt, 1);
	else if (c == 'd' || c == 'i')
		f_itoa(va_arg(args, int), "0123456789", 10, cnt);
	else if (c == 'u')
		f_utoa(va_arg(args, unsigned int), "0123456789", 10, cnt);
	else if (c == 'x')
		f_utoa(va_arg(args, unsigned int), "0123456789abcdef", 16, cnt);
	else if (c == 'X')
		f_utoa(va_arg(args, unsigned int), "0123456789ABCDEF", 16, cnt);
}

// Initializes the list of arguments and prints the string
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		cnt;

	va_start(args, str);
	i = -1;
	cnt = 0;
	while (str[++i])
	{
		if (str[i] == '%')
			f_identify(str[++i], args, &cnt);
		else
			cnt += write(1, &str[i], 1);
	}
	va_end(args);
	return (cnt);
}
