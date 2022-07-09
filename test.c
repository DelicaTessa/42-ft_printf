/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tessaclement <tessaclement@student.coda      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/09 16:04:09 by tessaclemen   #+#    #+#                 */
/*   Updated: 2022/07/09 16:14:11 by tessaclemen   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	int t;
	char c;

	c = 'a';
	t = 50;
	ft_printf("p0 % .3s\n", "cccc");
	ft_printf("pp %.50d\n", 10000);
	ft_printf("p1 %.4s\n", "cccc");
	ft_printf("p2 %.10s\n", "cccc");
	ft_printf("p3 %.4s\n", NULL);
	ft_printf("p4 %.5s\n", "aaaaa");
	ft_printf("p5 %.3d\n", 100);
	ft_printf("p6 %.0d\n", 100);
	ft_printf("p7 %.4d\n", 100);
	ft_printf("p8 %.10d\n", 100);
	ft_printf("p9 %.50d\n", 100);
	ft_printf("p10 %.1d\n", 100);
	ft_printf("p11 %.3d\n", 100);
	ft_printf("p12 %.0d\n", 0);
	ft_printf("p13 %.3i\n", 100);
	ft_printf("p14 %.0i\n", 100);
	ft_printf("p15 %.4i\n", 100);
	ft_printf("p16 %.10i\n", 100);
	ft_printf("p17 %.50i\n", 100);
	ft_printf("p18 %.1i\n", 100);
	ft_printf("p19 %.3x\n", 100);
	ft_printf("p20 %.0x\n", 0);
	ft_printf("p21 %.3x\n", 100);
	ft_printf("p22 %.0x\n", 100);
	ft_printf("p23 %.4x\n", 100);
	ft_printf("p24 %.10x\n", 100);
	ft_printf("p25 %.50x\n", 100);
	ft_printf("p26 %.1x\n", 100);
	ft_printf("p27 %.3x\n", 100);
	ft_printf("p28 %.0x\n", 0);
	ft_printf("p29 %.3u\n", 100);
	ft_printf("p30 %.0u\n", 100);
	ft_printf("p31 %.4u\n", 100);
	ft_printf("p32 %.10u\n", 100);
	ft_printf("p33 %.50u\n", 100);
	ft_printf("p34 %.1u\n", 100);
	ft_printf("p35 %.3u\n", 100);
	ft_printf("p36 %.0u\n", 0);
	ft_printf("%%\n");
	ft_printf("Hello 42 school! %s", NULL);
	ft_printf("%010%");
	ft_printf("%u", 4294967295);
	ft_printf("%d\n", 2147483647);
	ft_printf("%d\n", -2147483648);
	ft_printf("%x\n", 2147483647);
	ft_printf("%x\n", -2147483648);
	ft_printf("%X\n", 2147483647);
	ft_printf("%X\n", -2147483648);
	ft_printf("%x\n", 0);
	ft_printf("%010x\n", 0);
	ft_printf("%010x\n", 20);
	ft_printf("%010x\n", -20);
	ft_printf("%10x\n", 20);
	ft_printf("%10.2x\n", -20);
	ft_printf("%-10x\n", 50);
	ft_printf("%-15x\n", 0);
	ft_printf("%.1x\n", 500);
	ft_printf("%*.*x\n", 50, 10, 2);
	ft_printf("%x\n", -1);
	ft_printf("%");
	ft_printf("%40.50d\n", 50);
    ft_printf("%d\n", -589);
    ft_printf("%-4d\n", -2464);
    ft_printf("%.5d\n", -2372);
	ft_printf("%p\n", NULL);
	ft_printf("%015p\n", NULL);
	ft_printf("%15p\n", NULL);
	ft_printf("%-15p\n", NULL);

	return (0);
}