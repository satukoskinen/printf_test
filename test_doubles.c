/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_doubles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:55:43 by skoskine          #+#    #+#             */
/*   Updated: 2021/02/25 18:58:39 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

void	test_doubles(int use_ftprintf)
{
	int		ret;
	int		i;
	int		(*printf_ptr)(const char*, ...);

	double	values[] = {
		3.14159265, -958.125, -14.2315, -56.2012685,
		1.0, 0.1, 0.01, 0.001,
		0.5, 0.05, 0.005, 0.0005,
		-1.0, -0.1, -0.01, -0.001,
		-0.5, -0.05, -0.005, -0.0005,
		0.0, -0.0,
		0.87650894255,
		0.15, 0.25, 0.35, 0.45,
		0.55, 0.65, 0.75, 0.85,
		0.95, 0.1245, 0.1255, 0.1265,
		-0.15, -0.25, -0.35, -0.45,
		-0.55, -0.65, -0.75, -0.85,
		-0.95, -0.1245, -0.1255, -0.1265,
		-1.0/0, 1.0/0, 0.0/0, -0.0/0
		};

	if (use_ftprintf)
		printf_ptr = ft_printf;
	else
		printf_ptr = printf;

	printf_ptr("---------------------------\n");
	printf_ptr("Basic tests for double %%f %%F\n");
	printf_ptr("---------------------------\n");

	i = 0;
	while (i < 51)
	{
		ret = printf_ptr("%%f '%f'\n", values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%.f '%.f' %%.0f '%.0f' %%.1f '%.1f' %%.10f '%.10f' %%.15f '%.15f'\n", values[i], values[i], values[i], values[i], values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%10.f '%10.f' %%10.0f '%10.0f' %%10.1f '%10.1f' %%10.10f '%10.10f' %%10.15f '%10.15f'\n", values[i], values[i], values[i], values[i], values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%.2f '%.2f' %%.3f '%.3f' %%.4f '%.4f' %%.5f '%.5f' %%.6f '%.6f'\n", values[i], values[i], values[i], values[i], values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%#f '%#f'\n", values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%#.f '%#.f' %%#.0f '%#.0f' %%#.1f '%#.1f' %%#.10f '%#.10f' %%#.15f '%#.15f'\n", values[i], values[i], values[i], values[i], values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%0f '%0f' %%#0f '%#0f' %%0#.1f '%0#.1f' %%0 f '%0 f' %%+0f '%#+0f'\n", values[i], values[i], values[i], values[i], values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%010f '%010f' %%#010f '%#010f' %%0#10.1f '%0#10.1f' %%0 10f '%0 10f' %%+010f '%#+010f'\n", values[i], values[i], values[i], values[i], values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%+f '%+f' %%#+0f '%#+0f' %%+ 1f '%+ 1f' %%#+.f '%#+.f' %%0.10f '%0.10f'\n", values[i], values[i], values[i], values[i], values[i]);
		printf_ptr("ret is %d\n", ret);

		printf_ptr("\n---------------------------\n");
		
		i++;
	}
/*
	long double	long_values[] = {
		3.14159265l, -958.125l, -14.2315l, -56.2012685l,
		1.0l, 0.1l, 0.01l, 0.001l,
		0.5l, 0.05l, 0.005l, 0.0005l,
		-1.0l, -0.1l, -0.01l, -0.001l,
		-0.5l, -0.05l, -0.005l, -0.0005l,
		0.0l, -0.0l,
		0.87650894255l,
		0.15l, 0.25l, 0.35l, 0.45l,
		0.55l, 0.65l, 0.75l, 0.85l,
		0.95l, 0.1245l, 0.1255l, 0.1265l,
		-0.15l, -0.25l, -0.35l, -0.45l,
		-0.55l, -0.65l, -0.75l, -0.85l,
		-0.95l, -0.1245l, -0.1255l, -0.1265l,
		-1.0/0l, 1.0/0l, 0.0/0l, -0.0/0l
		};

	printf_ptr("---------------------------\n");
	printf_ptr("Basic tests for long double %%Lf %%LF\n");
	printf_ptr("---------------------------\n");
	
	i = 0;
	while (i < 51)
	{
		ret = printf_ptr("%%f '%f'\n", long_values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%.f '%.f' %%.0f '%.0f' %%.1f '%.1f' %%.10f '%.10f' %%.15f '%.15f'\n", long_values[i], long_values[i], long_values[i], long_values[i], long_values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%10.f '%10.f' %%10.0f '%10.0f' %%10.1f '%10.1f' %%10.10f '%10.10f' %%10.15f '%10.15f'\n", long_values[i], long_values[i], long_values[i], long_values[i], long_values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%.2f '%.2f' %%.3f '%.3f' %%.4f '%.4f' %%.5f '%.5f' %%.6f '%.6f'\n", long_values[i], long_values[i], long_values[i], long_values[i], long_values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%#f '%#f'\n", long_values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%#.f '%#.f' %%#.0f '%#.0f' %%#.1f '%#.1f' %%#.10f '%#.10f' %%#.15f '%#.15f'\n", long_values[i], long_values[i], long_values[i], long_values[i], long_values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%0f '%0f' %%#0f '%#0f' %%0#.1f '%0#.1f' %%0 f '%0 f' %%+0f '%#+0f'\n", long_values[i], long_values[i], long_values[i], long_values[i], long_values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%010f '%010f' %%#010f '%#010f' %%0#10.1f '%0#10.1f' %%0 10f '%0 10f' %%+010f '%#+010f'\n", long_values[i], long_values[i], long_values[i], long_values[i], long_values[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("%%+f '%+f' %%#+0f '%#+0f' %%+ 1f '%+ 1f' %%#+.f '%#+.f' %%0.10f '%0.10f'\n", long_values[i], long_values[i], long_values[i], long_values[i], long_values[i]);
		printf_ptr("ret is %d\n", ret);

		printf_ptr("\n---------------------------\n");
		
		i++;
	}
	*/

}