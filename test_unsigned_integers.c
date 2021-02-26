/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_unsigned_integers.c                           ::      ::    ::   */
/*                                                    : :         :     */
/*   By: skoskine <skoskine@student.hive.fi>        #  :       #        */
/*                                                #####   #           */
/*   Created: 2021/01/2217:07:42 by skoskine          ##    ##             */
/*   Updated: 2021/02/2017:03:49 by skoskine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

void	test_unsigned_integers(int use_ftprintf)
{
	int					ret;
	int					uint;
	unsigned char 		uchar;
	unsigned short 		ushort;
	unsigned long 		ulong;
	unsigned long long 	ulonglong;
	int (*printf_ptr)(const char*, ...);

	if (use_ftprintf)
		printf_ptr = ft_printf;
	else
		printf_ptr = printf;

	printf_ptr("---------------------------------------\n");
	printf_ptr("Basic tests for uint %%o %%u %%x %%X\n");
	printf_ptr("---------------------------------------\n");

	uint = 0;

	ret = printf_ptr("7 '%%' '%o' '%u' '%x' '%X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10o' '%10u' '%10x' '%10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10o' '%.10u' '%.10x' '%.10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1o' '%5.1u' '%5.1x' '%5.1X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0o' '%5.0u' '%5.0x' '%5.0X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010o' '%010u' '%010x' '%010X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0o' '%05.0u' '%05.0x' '%05.0X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5o' '%01.5u' '%01.5x' '%01.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5o' '%1.5u' '%1.5x' '%1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5o' '%1.5u' '%#1.5x' '%#1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5o' '%-1.5u' '%-#1.5x' '%-#1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5o' '%-1.5u' '%-#1.5x' '%-#1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5o' '%-1.5u' '%#-1.5x' '%#-1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5o' '%-1.5u' '%#-1.5x' '%#-1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0o' '%-1.0u' '%#-1.0x' '%#-1.0X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10o' '%-10.10u' '%#-10.10x' '%#-10.10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10o' '%-10u' '%#-10x' '%#-10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.o' '%.u' '%.x' '%.X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	uint = 392082;

	ret = printf_ptr("7 '%%' '%o' '%u' '%x' '%X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10o' '%10u' '%10x' '%10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10o' '%.10u' '%.10x' '%.10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1o' '%5.1u' '%5.1x' '%5.1X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0o' '%5.0u' '%5.0x' '%5.0X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010o' '%010u' '%010x' '%010X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0o' '%05.0u' '%05.0x' '%05.0X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5o' '%01.5u' '%01.5x' '%01.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5o' '%1.5u' '%1.5x' '%1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5o' '%1.5u' '%#1.5x' '%#1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5o' '%-1.5u' '%-#1.5x' '%-#1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5o' '%-1.5u' '%-#1.5x' '%-#1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5o' '%-1.5u' '%#-1.5x' '%#-1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5o' '%-1.5u' '%#-1.5x' '%#-1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0o' '%-1.0u' '%#-1.0x' '%#-1.0X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10o' '%-10.10u' '%#-10.10x' '%#-10.10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10o' '%-10u' '%#-10x' '%#-10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.o' '%.u' '%.x' '%.X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	uint = UINT_MAX;

	ret = printf_ptr("7 '%%' '%o' '%u' '%x' '%X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10o' '%10u' '%10x' '%10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10o' '%.10u' '%.10x' '%.10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1o' '%5.1u' '%5.1x' '%5.1X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0o' '%5.0u' '%5.0x' '%5.0X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010o' '%010u' '%010x' '%010X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0o' '%05.0u' '%05.0x' '%05.0X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5o' '%01.5u' '%01.5x' '%01.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5o' '%1.5u' '%1.5x' '%1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5o' '%1.5u' '%#1.5x' '%#1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5o' '%-1.5u' '%-#1.5x' '%-#1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5o' '%-1.5u' '%-#1.5x' '%-#1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5o' '%-1.5u' '%#-1.5x' '%#-1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5o' '%-1.5u' '%#-1.5x' '%#-1.5X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0o' '%-1.0u' '%#-1.0x' '%#-1.0X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10o' '%-10.10u' '%#-10.10x' '%#-10.10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10o' '%-10u' '%#-10x' '%#-10X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.o' '%.u' '%.x' '%.X'\n", uint, uint, uint, uint);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing %o\n", 42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("print zero '%#o'\n", 0);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form '%#10.5o'\n",123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zero '%#10.8o'\n",123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zero '%#.o'\n",123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zero '%#o'\n",123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("print zero '%#x' '%#X'\n", 0, 0);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("print zero '%#-5.x' '%#-5.X'\n", 0, 0);
	printf_ptr("ret is %d\n", ret);

	printf_ptr("----------------------------------------------\n");
	printf_ptr("Basic tests for uchar %%hho %%hhu %%hhx %%hhX\n");
	printf_ptr("----------------------------------------------\n");

	uchar = 0;

	ret = printf_ptr("7 '%%' '%hho' '%hhu' '%hhx' '%hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10hho' '%10hhu' '%10hhx' '%10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10hho' '%.10hhu' '%.10hhx' '%.10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1hho' '%5.1hhu' '%5.1hhx' '%5.1hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0hho' '%5.0hhu' '%5.0hhx' '%5.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010hho' '%010hhu' '%010hhx' '%010hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0hho' '%05.0hhu' '%05.0hhx' '%05.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5hho' '%01.5hhu' '%01.5hhx' '%01.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5hho' '%1.5hhu' '%1.5hhx' '%1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5hho' '%1.5hhu' '%#1.5hhx' '%#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5hho' '%-1.5hhu' '%-#1.5hhx' '%-#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5hho' '%-1.5hhu' '%-#1.5hhx' '%-#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5hho' '%-1.5hhu' '%#-1.5hhx' '%#-1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5hho' '%-1.5hhu' '%#-1.5hhx' '%#-1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0hho' '%-1.0hhu' '%#-1.0hhx' '%#-1.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10hho' '%-10.10hhu' '%#-10.10hhx' '%#-10.10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10hho' '%-10hhu' '%#-10hhx' '%#-10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.hho' '%.hhu' '%.hhx' '%.hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	uchar = 42;

	ret = printf_ptr("7 '%%' '%hho' '%hhu' '%hhx' '%hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10hho' '%10hhu' '%10hhx' '%10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10hho' '%.10hhu' '%.10hhx' '%.10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1hho' '%5.1hhu' '%5.1hhx' '%5.1hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0hho' '%5.0hhu' '%5.0hhx' '%5.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010hho' '%010hhu' '%010hhx' '%010hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0hho' '%05.0hhu' '%05.0hhx' '%05.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5hho' '%01.5hhu' '%01.5hhx' '%01.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5hho' '%1.5hhu' '%1.5hhx' '%1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5hho' '%1.5hhu' '%#1.5hhx' '%#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5hho' '%-1.5hhu' '%-#1.5hhx' '%-#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5hho' '%-1.5hhu' '%-#1.5hhx' '%-#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5hho' '%-1.5hhu' '%#-1.5hhx' '%#-1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5hho' '%-1.5hhu' '%#-1.5hhx' '%#-1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0hho' '%-1.0hhu' '%#-1.0hhx' '%#-1.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10hho' '%-10.10hhu' '%#-10.10hhx' '%#-10.10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10hho' '%-10hhu' '%#-10hhx' '%#-10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.hho' '%.hhu' '%.hhx' '%.hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	uchar = '~';

	ret = printf_ptr("7 '%%' '%hho' '%hhu' '%hhx' '%hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10hho' '%10hhu' '%10hhx' '%10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10hho' '%.10hhu' '%.10hhx' '%.10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1hho' '%5.1hhu' '%5.1hhx' '%5.1hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0hho' '%5.0hhu' '%5.0hhx' '%5.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010hho' '%010hhu' '%010hhx' '%010hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0hho' '%05.0hhu' '%05.0hhx' '%05.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5hho' '%01.5hhu' '%01.5hhx' '%01.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5hho' '%1.5hhu' '%1.5hhx' '%1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5hho' '%1.5hhu' '%#1.5hhx' '%#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5hho' '%-1.5hhu' '%-#1.5hhx' '%-#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5hho' '%-1.5hhu' '%-#1.5hhx' '%-#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5hho' '%-1.5hhu' '%#-1.5hhx' '%#-1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5hho' '%-1.5hhu' '%#-1.5hhx' '%#-1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0hho' '%-1.0hhu' '%#-1.0hhx' '%#-1.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10hho' '%-10.10hhu' '%#-10.10hhx' '%#-10.10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10hho' '%-10hhu' '%#-10hhx' '%#-10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.hho' '%.hhu' '%.hhx' '%.hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	uchar = UCHAR_MAX;

	ret = printf_ptr("7 '%%' '%hho' '%hhu' '%hhx' '%hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10hho' '%10hhu' '%10hhx' '%10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10hho' '%.10hhu' '%.10hhx' '%.10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1hho' '%5.1hhu' '%5.1hhx' '%5.1hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0hho' '%5.0hhu' '%5.0hhx' '%5.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010hho' '%010hhu' '%010hhx' '%010hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0hho' '%05.0hhu' '%05.0hhx' '%05.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5hho' '%01.5hhu' '%01.5hhx' '%01.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5hho' '%1.5hhu' '%1.5hhx' '%1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5hho' '%1.5hhu' '%#1.5hhx' '%#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5hho' '%-1.5hhu' '%-#1.5hhx' '%-#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5hho' '%-1.5hhu' '%-#1.5hhx' '%-#1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5hho' '%-1.5hhu' '%#-1.5hhx' '%#-1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5hho' '%-1.5hhu' '%#-1.5hhx' '%#-1.5hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0hho' '%-1.0hhu' '%#-1.0hhx' '%#-1.0hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10hho' '%-10.10hhu' '%#-10.10hhx' '%#-10.10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10hho' '%-10hhu' '%#-10hhx' '%#-10hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.hho' '%.hhu' '%.hhx' '%.hhX'\n", uchar, uchar, uchar, uchar);
	printf_ptr("ret is %d\n", ret);

	printf_ptr("\nTest octal %%hho\n");

	ret = printf_ptr("testing %hho\n", (unsigned char)42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("print zero '%#hho'\n", (unsigned char)0);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form '%#10.5hho'\n", (unsigned char)100);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zero '%#10.8hho'\n", (unsigned char)250);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zero '%#.hho'\n", (unsigned char)250);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zero '%#hho'\n", (unsigned char)250);
	printf_ptr("ret is %d\n", ret);

	printf_ptr("------------------------------------------\n");
	printf_ptr("Basic tests for ushort %%ho %%hu %%hx %%hX\n");
	printf_ptr("------------------------------------------\n");

	ushort = 0;

	ret = printf_ptr("7 '%%' '%ho' '%hu' '%hx' '%hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10ho' '%10hu' '%10hx' '%10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10ho' '%.10hu' '%.10hx' '%.10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1ho' '%5.1hu' '%5.1hx' '%5.1hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0ho' '%5.0hu' '%5.0hx' '%5.0hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010ho' '%010hu' '%010hx' '%010hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0ho' '%05.0hu' '%05.0hx' '%05.0hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5ho' '%01.5hu' '%01.5hx' '%01.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5ho' '%1.5hu' '%1.5hx' '%1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5ho' '%1.5hu' '%#1.5hx' '%#1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5ho' '%-1.5hu' '%-#1.5hx' '%-#1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5ho' '%-1.5hu' '%-#1.5hx' '%-#1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5ho' '%-1.5hu' '%#-1.5hx' '%#-1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5ho' '%-1.5hu' '%#-1.5hx' '%#-1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0ho' '%-1.0hu' '%#-1.0hx' '%#-1.0hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10ho' '%-10.10hu' '%#-10.10hx' '%#-10.10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10ho' '%-10hu' '%#-10hx' '%#-10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.ho' '%.hu' '%.hx' '%.hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ushort = 42;

	ret = printf_ptr("7 '%%' '%ho' '%hu' '%hx' '%hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10ho' '%10hu' '%10hx' '%10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10ho' '%.10hu' '%.10hx' '%.10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1ho' '%5.1hu' '%5.1hx' '%5.1hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0ho' '%5.0hu' '%5.0hx' '%5.0hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010ho' '%010hu' '%010hx' '%010hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0ho' '%05.0hu' '%05.0hx' '%05.0hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5ho' '%01.5hu' '%01.5hx' '%01.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5ho' '%1.5hu' '%1.5hx' '%1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5ho' '%1.5hu' '%#1.5hx' '%#1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5ho' '%-1.5hu' '%-#1.5hx' '%-#1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5ho' '%-1.5hu' '%-#1.5hx' '%-#1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5ho' '%-1.5hu' '%#-1.5hx' '%#-1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5ho' '%-1.5hu' '%#-1.5hx' '%#-1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0ho' '%-1.0hu' '%#-1.0hx' '%#-1.0hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10ho' '%-10.10hu' '%#-10.10hx' '%#-10.10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10ho' '%-10hu' '%#-10hx' '%#-10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.ho' '%.hu' '%.hx' '%.hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ushort = USHRT_MAX;

	ret = printf_ptr("7 '%%' '%ho' '%hu' '%hx' '%hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10ho' '%10hu' '%10hx' '%10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10ho' '%.10hu' '%.10hx' '%.10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1ho' '%5.1hu' '%5.1hx' '%5.1hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0ho' '%5.0hu' '%5.0hx' '%5.0hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010ho' '%010hu' '%010hx' '%010hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0ho' '%05.0hu' '%05.0hx' '%05.0hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5ho' '%01.5hu' '%01.5hx' '%01.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5ho' '%1.5hu' '%1.5hx' '%1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5ho' '%1.5hu' '%#1.5hx' '%#1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5ho' '%-1.5hu' '%-#1.5hx' '%-#1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5ho' '%-1.5hu' '%-#1.5hx' '%-#1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5ho' '%-1.5hu' '%#-1.5hx' '%#-1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5ho' '%-1.5hu' '%#-1.5hx' '%#-1.5hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0ho' '%-1.0hu' '%#-1.0hx' '%#-1.0hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10ho' '%-10.10hu' '%#-10.10hx' '%#-10.10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10ho' '%-10hu' '%#-10hx' '%#-10hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.ho' '%.hu' '%.hx' '%.hX'\n", ushort, ushort, ushort, ushort);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing %ho\n", (unsigned short)42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("print zerho '%#ho'\n", (unsigned short)0);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form '%#10.5ho'\n", (unsigned short)123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zerho '%#10.8ho'\n", (unsigned short)123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zerho '%#.ho'\n", (unsigned short)123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zerho '%#ho'\n", (unsigned short)123423);
	printf_ptr("ret is %d\n", ret);

	printf_ptr("------------------------------------------\n");
	printf_ptr("Basic tests for ulong %%lo %%lu %%lx %%lX\n");
	printf_ptr("------------------------------------------\n");
	
	ulong = 0;

	ret = printf_ptr("7 '%%' '%lo' '%lu' '%lx' '%lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10lo' '%10lu' '%10lx' '%10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10lo' '%.10lu' '%.10lx' '%.10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1lo' '%5.1lu' '%5.1lx' '%5.1lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0lo' '%5.0lu' '%5.0lx' '%5.0lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010lo' '%010lu' '%010lx' '%010lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0lo' '%05.0lu' '%05.0lx' '%05.0lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5lo' '%01.5lu' '%01.5lx' '%01.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5lo' '%1.5lu' '%1.5lx' '%1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5lo' '%1.5lu' '%#1.5lx' '%#1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5lo' '%-1.5lu' '%-#1.5lx' '%-#1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5lo' '%-1.5lu' '%-#1.5lx' '%-#1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5lo' '%-1.5lu' '%#-1.5lx' '%#-1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5lo' '%-1.5lu' '%#-1.5lx' '%#-1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0lo' '%-1.0lu' '%#-1.0lx' '%#-1.0lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10lo' '%-10.10lu' '%#-10.10lx' '%#-10.10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10lo' '%-10lu' '%#-10lx' '%#-10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.lo' '%.lu' '%.lx' '%.lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ulong = 392082;

	ret = printf_ptr("7 '%%' '%lo' '%lu' '%lx' '%lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10lo' '%10lu' '%10lx' '%10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10lo' '%.10lu' '%.10lx' '%.10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1lo' '%5.1lu' '%5.1lx' '%5.1lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0lo' '%5.0lu' '%5.0lx' '%5.0lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010lo' '%010lu' '%010lx' '%010lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0lo' '%05.0lu' '%05.0lx' '%05.0lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5lo' '%01.5lu' '%01.5lx' '%01.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5lo' '%1.5lu' '%1.5lx' '%1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5lo' '%1.5lu' '%#1.5lx' '%#1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5lo' '%-1.5lu' '%-#1.5lx' '%-#1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5lo' '%-1.5lu' '%-#1.5lx' '%-#1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5lo' '%-1.5lu' '%#-1.5lx' '%#-1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5lo' '%-1.5lu' '%#-1.5lx' '%#-1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0lo' '%-1.0lu' '%#-1.0lx' '%#-1.0lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10lo' '%-10.10lu' '%#-10.10lx' '%#-10.10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10lo' '%-10lu' '%#-10lx' '%#-10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.lo' '%.lu' '%.lx' '%.lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ulong = ULONG_MAX;

	ret = printf_ptr("7 '%%' '%lo' '%lu' '%lx' '%lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10lo' '%10lu' '%10lx' '%10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10lo' '%.10lu' '%.10lx' '%.10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1lo' '%5.1lu' '%5.1lx' '%5.1lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0lo' '%5.0lu' '%5.0lx' '%5.0lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010lo' '%010lu' '%010lx' '%010lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0lo' '%05.0lu' '%05.0lx' '%05.0lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5lo' '%01.5lu' '%01.5lx' '%01.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5lo' '%1.5lu' '%1.5lx' '%1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5lo' '%1.5lu' '%#1.5lx' '%#1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5lo' '%-1.5lu' '%-#1.5lx' '%-#1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5lo' '%-1.5lu' '%-#1.5lx' '%-#1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5lo' '%-1.5lu' '%#-1.5lx' '%#-1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5lo' '%-1.5lu' '%#-1.5lx' '%#-1.5lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0lo' '%-1.0lu' '%#-1.0lx' '%#-1.0lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10lo' '%-10.10lu' '%#-10.10lx' '%#-10.10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10lo' '%-10lu' '%#-10lx' '%#-10lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.lo' '%.lu' '%.lx' '%.lX'\n", ulong, ulong, ulong, ulong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing %lo\n", (unsigned long)42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("print zerlo '%#lo'\n", (unsigned long)0);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form '%#10.5lo'\n", (unsigned long)123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zerlo '%#10.8lo'\n", (unsigned long)123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zerlo '%#.lo'\n", (unsigned long)123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octal alt form zerlo '%#lo'\n", (unsigned long)123423);
	printf_ptr("ret is %d\n", ret);

	printf_ptr("------------------------------------------\n");
	printf_ptr("Basic tests for ulonglong %%llo %%llu %%llx %%llX\n");
	printf_ptr("------------------------------------------\n");

	ulonglong = 0;

	ret = printf_ptr("7 '%%' '%llo' '%llu' '%llx' '%llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10llo' '%10llu' '%10llx' '%10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10llo' '%.10llu' '%.10llx' '%.10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1llo' '%5.1llu' '%5.1llx' '%5.1llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0llo' '%5.0llu' '%5.0llx' '%5.0llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010llo' '%010llu' '%010llx' '%010llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0llo' '%05.0llu' '%05.0llx' '%05.0llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5llo' '%01.5llu' '%01.5llx' '%01.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5llo' '%1.5llu' '%1.5llx' '%1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5llo' '%1.5llu' '%#1.5llx' '%#1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5llo' '%-1.5llu' '%-#1.5llx' '%-#1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5llo' '%-1.5llu' '%-#1.5llx' '%-#1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5llo' '%-1.5llu' '%#-1.5llx' '%#-1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5llo' '%-1.5llu' '%#-1.5llx' '%#-1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0llo' '%-1.0llu' '%#-1.0llx' '%#-1.0llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10llo' '%-10.10llu' '%#-10.10llx' '%#-10.10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10llo' '%-10llu' '%#-10llx' '%#-10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.llo' '%.llu' '%.llx' '%.llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ulonglong = 392082;

	ret = printf_ptr("7 '%%' '%llo' '%llu' '%llx' '%llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10llo' '%10llu' '%10llx' '%10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10llo' '%.10llu' '%.10llx' '%.10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1llo' '%5.1llu' '%5.1llx' '%5.1llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0llo' '%5.0llu' '%5.0llx' '%5.0llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010llo' '%010llu' '%010llx' '%010llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0llo' '%05.0llu' '%05.0llx' '%05.0llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5llo' '%01.5llu' '%01.5llx' '%01.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5llo' '%1.5llu' '%1.5llx' '%1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5llo' '%1.5llu' '%#1.5llx' '%#1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5llo' '%-1.5llu' '%-#1.5llx' '%-#1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5llo' '%-1.5llu' '%-#1.5llx' '%-#1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5llo' '%-1.5llu' '%#-1.5llx' '%#-1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5llo' '%-1.5llu' '%#-1.5llx' '%#-1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0llo' '%-1.0llu' '%#-1.0llx' '%#-1.0llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10llo' '%-10.10llu' '%#-10.10llx' '%#-10.10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10llo' '%-10llu' '%#-10llx' '%#-10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.llo' '%.llu' '%.llx' '%.llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ulonglong = ULONG_LONG_MAX;

	ret = printf_ptr("7 '%%' '%llo' '%llu' '%llx' '%llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("8 '%%10' '%10llo' '%10llu' '%10llx' '%10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("9 '%%.10' '%.10llo' '%.10llu' '%.10llx' '%.10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("10 '%%5.1' '%5.1llo' '%5.1llu' '%5.1llx' '%5.1llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("11 '%%5.0' '%5.0llo' '%5.0llu' '%5.0llx' '%5.0llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("12 '%%010' '%010llo' '%010llu' '%010llx' '%010llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("13 '%%05.0' '%05.0llo' '%05.0llu' '%05.0llx' '%05.0llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("14 '%%01.5' '%01.5llo' '%01.5llu' '%01.5llx' '%01.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("15 '%%1.5' '%1.5llo' '%1.5llu' '%1.5llx' '%1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("16 '%%#1.5' '%#1.5llo' '%1.5llu' '%#1.5llx' '%#1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("17 '%%-#1.5' '%-#1.5llo' '%-1.5llu' '%-#1.5llx' '%-#1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("18 '%%-#1.5' '%-#1.5llo' '%-1.5llu' '%-#1.5llx' '%-#1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("19 '%%-1.5' '%#-1.5llo' '%-1.5llu' '%#-1.5llx' '%#-1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("20 '%%#-1.5' '%#-1.5llo' '%-1.5llu' '%#-1.5llx' '%#-1.5llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);
	
	ret = printf_ptr("21 '%%#-1.0' '%#-1.0llo' '%-1.0llu' '%#-1.0llx' '%#-1.0llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("22 '%%#-10.10' '%#-10.10llo' '%-10.10llu' '%#-10.10llx' '%#-10.10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("23 '%%#-10' '%#-10llo' '%-10llu' '%#-10llx' '%#-10llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("24 '%%.' '%.llo' '%.llu' '%.llx' '%.llX'\n", ulonglong, ulonglong, ulonglong, ulonglong);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("testing %llo\n", (unsigned long long)42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("print zerllo '%#llo'\n", (unsigned long long)0);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octall allt form '%#10.5llo'\n", (unsigned long long)123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octall allt form zerllo '%#10.8llo'\n", (unsigned long long)123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octall allt form zerllo '%#.llo'\n", (unsigned long long)123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("octall allt form zerllo '%#llo'\n", (unsigned long long)123423);
	printf_ptr("ret is %d\n", ret);
}