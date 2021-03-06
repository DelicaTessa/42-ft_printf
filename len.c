/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   len.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 10:50:20 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/28 09:13:49 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

long long			ft_int_len(long long n)
{
	long long i;

	i = 1;
	if (n == -2147483648)
	{
		i = 11;
		return (i);
	}
	if (n < 0)
	{
		n = n * -1;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

unsigned long long	ft_uint_len(unsigned long long n)
{
	unsigned long long i;

	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

unsigned long long	ft_hex_len(unsigned long long n)
{
	unsigned long long i;

	i = 1;
	while (n >= 16)
	{
		n /= 16;
		i++;
	}
	return (i);
}
