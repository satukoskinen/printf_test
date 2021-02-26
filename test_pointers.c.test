/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_pointers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 19:05:09 by skoskine          #+#    #+#             */
/*   Updated: 2021/02/21 10:47:24 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

void	test_pointers(void)
{
	int	ret;
	int	test_value;
	int	*test_pointer;
	int (*printf_ptr)(const char*, ...);

	test_value = 42;
	test_pointer = &test_value;

	printf_ptr = ft_printf;

	ret = printf_ptr("testing test_pointer %%p '%p'\n", test_pointer);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing &test_value %%p '%p'\n", &test_value);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("testing test_pointer %%p '%20p'\n", test_pointer);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%200p'\n", test_pointer);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%-20p'\n", test_pointer);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%5p'\n", test_pointer);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%p'\n", NULL);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%-20p'\n", NULL);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%5p'\n", NULL);
	printf_ptr("ret is %d\n", ret);

	printf_ptr = printf;

	ret = printf_ptr("testing test_pointer %%p '%p'\n", test_pointer);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing &test_value %%p '%p'\n", &test_value);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("testing test_pointer %%p '%20p'\n", test_pointer);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%200p'\n", test_pointer);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%-20p'\n", test_pointer);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%5p'\n", test_pointer);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%p'\n", NULL);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%-20p'\n", NULL);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing test_pointer %%p '%5p'\n", NULL);
	printf_ptr("ret is %d\n", ret);
}