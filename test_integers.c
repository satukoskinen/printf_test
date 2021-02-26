/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_integers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skoskine <skoskine@student.hive.fi>        ++  +:+       ++        */
/*                                                ++++++   ++           */
/*   Created: 2021/01/22 17:07:10 by skoskine          +    +             */
/*   Updated: 2021/02/20 16:24:25 by skoskine            .fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

void	test_signed_integers(int use_ftprintf)
{
	int			ret;
	int			i;
	int 		(*printf_ptr)(const char*, ...);

	if (use_ftprintf)
			printf_ptr = ft_printf;
	else
		printf_ptr = printf;

	printf_ptr("---------------------------\n");
	printf_ptr("Basic tests for int %%d %%i\n");
	printf_ptr("---------------------------\n");

	ret = printf_ptr("1 testing %%d %%i '%d' '%i'\n", 42, 42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("2 testing %%d %%i '%d' '%i'\n", -42, -42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("3 zeros %%d %%i '%d' '%i'\n", 0, 0);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("4 testing %%+i %% d '%+i' '% d'\n", 2147483647, -2147483647 - 1);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("5 testing %%.1d %%+.1i %% d '%.1d' '%+.1i' '% d'\n", 42, 2147483647, -2147483647 - 1);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6a %%-10000.8 %-10000.8d'\n", -123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6b %%-10.8000 '%-10.8000d'\n", -123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6b %%010000.8000 '%010000.8000d'\n", -123423);
	printf_ptr("ret is %d\n", ret);

	int		signed_int[] = {0, 392082, -392082, INT_MAX, INT_MIN};
	i = 0;

	while (i < 4)
	{
		ret = printf_ptr("7 '%%' '%d' '%i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("8 '%%10' '%10d' '%10i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("9 '%%.10' '%.10d' '%.10i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("10 '%%5.1' '%5.1d' '%5.1i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("11 '%%5.0' '%5.0d' '%5.0i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("12 '%%010' '%010d' '%010i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("13 '%%05.0' '%05.0d' '%05.0i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("14 '%%01.5' '%01.5d' '%01.5i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("15 '%%+1.5' '%+1.5d' '%+1.5i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("16 '%%+1.5' '%+1.5d' '%+1.5i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("18 '%%-+1.5' '%-+1.5d' '%-+1.5i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("19 '%%-+1.5' '%-+1.5d' '%-+1.5i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("20 '%% -1.5' '% -1.5d' '% -1.5i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);
		
		ret = printf_ptr("21 '%% -1.0' '% -1.0d' '% -1.0i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("22 '%% -10.10' '% -10.10d' '% -10.10i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("23 '%% -10' '% -10d' '% -10i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("24 '%%.' '%.d' '%.i'\n", signed_int[i], signed_int[i]);
		printf_ptr("ret is %d\n", ret);

		printf_ptr("\n---------------------------\n\n");

		i++;
	}

	printf_ptr("---------------------------------------\n");
	printf_ptr("Bashhic tests for signed char %%hhd %%hhi\n");
	printf_ptr("---------------------------------------\n");
		
	ret = printf_ptr("1 testhhing %%hhd %%hhi '%hhd' '%hhi'\n", (signed char)42, (signed char)42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("2 testhhing %%hhd %%hhi '%hhd' '%hhi'\n", (signed char)-42, (signed char)-42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("3 zeros %%hhd %%hhi '%hhd' '%hhi'\n", (signed char)0, (signed char)0);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("4 testhhing %%+hhi %% hhd '%+hhi' '% hhd'\n", (signed char)2147483647, (signed char)(-2147483647 - 1));
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("5 testhhing %%.1hhd %%+.1hhi %% hhd '%.1hhd' '%+.1hhi' '% hhd'\n", (signed char)42, (signed char)2147483647, (signed char)(-2147483647 - 1));	
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6a %%-10000.8 '%%10' '%-10000.8hhd'\n", (signed char)-123);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6b %%-10.8000 '%-10.8000hhd'\n", (signed char)-123);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6b %%010000.8000 '%010000.8000hhd'\n", (signed char)-123);
	printf_ptr("ret is %d\n", ret);

	char	signed_char[] = {0, '~', -10, SCHAR_MAX, SCHAR_MIN};
	i = 0;

	while (i < 4)
	{
		ret = printf_ptr("7 '%%' '%hhd' '%hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("8 '%%10' '%10hhd' '%10hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("9 '%%.10' '%.10hhd' '%.10hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("10 '%%5.1' '%5.1hhd' '%5.1hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("11 '%%5.0' '%5.0hhd' '%5.0hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("12 '%%010' '%010hhd' '%010hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("13 '%%05.0' '%05.0hhd' '%05.0hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("14 '%%01.5' '%01.5hhd' '%01.5hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("15 '%%+1.5' '%+1.5hhd' '%+1.5hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("16 '%%+1.5' '%+1.5hhd' '%+1.5hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("18 '%%-+1.5' '%-+1.5hhd' '%-+1.5hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("19 '%%-+1.5' '%-+1.5hhd' '%-+1.5hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("20 '%% -1.5' '% -1.5hhd' '% -1.5hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);
		
		ret = printf_ptr("21 '%% -1.0' '% -1.0hhd' '% -1.0hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("22 '%% -10.10' '% -10.10hhd' '% -10.10hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("23 '%% -10' '% -10hhd' '% -10hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("24 '%%.' '%.hhd' '%.hhi'\n", signed_char[i], signed_char[i]);
		printf_ptr("ret is %d\n", ret);

		printf_ptr("\n---------------------------\n\n");
		i++;
	}
		
	printf_ptr("--------------------------------\n");
	printf_ptr("Bashic tests for short %%hd %%hi\n");
	printf_ptr("--------------------------------\n");

	ret = printf_ptr("1 testhing %%hd %%hi '%hd' '%hi'\n", (short)42, (short)42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("2 testhing %%hd %%hi '%hd' '%hi'\n", (short)-42, (short)-42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("3 zeros %%hd %%hi '%hd' '%hi'\n", (short)0, (short)0);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("4 testhing %%+hi %% hd '%+hi' '% hd'\n", (short)2147483647, (short)(-2147483647 - 1));
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("5 testhing %%.1hd %%+.1hi %% hd '%.1hd' '%+.1hi' '% hd'\n", (short)42, (short)2147483647, (short)(-2147483647 - 1));
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6a %%-10000.8 '%%10' '%-10000.8hd'\n", (short)-12423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6b %%-10.8000 '%-10.8000hd'\n", (short)-12323);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6b %%010000.8000 '%010000.8000hd'\n", (short)-12343);
	printf_ptr("ret is %d\n", ret);

	short	signed_short[] = {0, 42, -10, SHRT_MAX, SHRT_MIN};
	i = 0;

	while (i < 4)
	{
		ret = printf_ptr("7 '%%' '%hd' '%hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("8 '%%10' '%10hd' '%10hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("9 '%%.10' '%.10hd' '%.10hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("10 '%%5.1' '%5.1hd' '%5.1hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("11 '%%5.0' '%5.0hd' '%5.0hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("12 '%%010' '%010hd' '%010hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("13 '%%05.0' '%05.0hd' '%05.0hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("14 '%%01.5' '%01.5hd' '%01.5hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("15 '%%+1.5' '%+1.5hd' '%+1.5hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("16 '%%+1.5' '%+1.5hd' '%+1.5hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("18 '%%-+1.5' '%-+1.5hd' '%-+1.5hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("19 '%%-+1.5' '%-+1.5hd' '%-+1.5hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("20 '%% -1.5' '% -1.5hd' '% -1.5hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);
		
		ret = printf_ptr("21 '%% -1.0' '% -1.0hd' '% -1.0hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("22 '%% -10.10' '% -10.10hd' '% -10.10hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("23 '%% -10' '% -10hd' '% -10hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("24 '%%.' '%.hd' '%.hi'\n", signed_short[i], signed_short[i]);
		printf_ptr("ret is %d\n", ret);

		printf_ptr("\n---------------------------\n\n");
		i++;
	}

	printf_ptr("---------------------------------------\n");
	printf_ptr("Baslic tests for long %%ld %%li\n");
	printf_ptr("---------------------------------------\n");

	ret = printf_ptr("1 testling %%ld %%li '%ld' '%li'\n", (long)42, (long)42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("2 testling %%ld %%li '%ld' '%li'\n", (long)-42, (long)-42);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("3 zeros %%ld %%li '%ld' '%li'\n", (long)0, (long)0);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("4 testling %%+li %% ld '%+li' '% ld'\n", (long)2147483647, (long)(-2147483647 - 1));
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("5 testling %%.1ld %%+.1li %% ld '%.1ld' '%+.1li' '% ld'\n", (long)42, (long)2147483647, (long)(-2147483647 - 1));
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6a %%-10000.8 '%%10' '%-10000.8ld'\n", (long)-123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6b %%-10.8000 '%-10.8000ld'\n", (long)-123423);
	printf_ptr("ret is %d\n", ret);

	ret = printf_ptr("6b %%010000.8000 '%010000.8000ld'\n", (long)-123423);
	printf_ptr("ret is %d\n", ret);

	long	signed_long[] = {0, 42, -10, LONG_MAX, LONG_MIN};
	i = 0;

	while (i < 4)
	{
		ret = printf_ptr("7 '%%' '%ld' '%li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("8 '%%10' '%10ld' '%10li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("9 '%%.10' '%.10ld' '%.10li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("10 '%%5.1' '%5.1ld' '%5.1li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("11 '%%5.0' '%5.0ld' '%5.0li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("12 '%%010' '%010ld' '%010li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("13 '%%05.0' '%05.0ld' '%05.0li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("14 '%%01.5' '%01.5ld' '%01.5li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("15 '%%+1.5' '%+1.5ld' '%+1.5li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("16 '%%+1.5' '%+1.5ld' '%+1.5li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("18 '%%-+1.5' '%-+1.5ld' '%-+1.5li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("19 '%%-+1.5' '%-+1.5ld' '%-+1.5li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("20 '%% -1.5' '% -1.5ld' '% -1.5li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);
		
		ret = printf_ptr("21 '%% -1.0' '% -1.0ld' '% -1.0li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("22 '%% -10.10' '% -10.10ld' '% -10.10li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("23 '%% -10' '% -10ld' '% -10li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("24 '%%.' '%.ld' '%.li'\n", signed_long[i], signed_long[i]);
		printf_ptr("ret is %d\n", ret);

		printf_ptr("\n---------------------------\n\n");
		i++;
	}

		printf_ptr("---------------------------------------\n");
		printf_ptr("Basic tests for long long %%lld %%lli\n");
		printf_ptr("---------------------------------------\n");
		
		ret = printf_ptr("1 testlling %%lld %%lli '%lld' '%lli'\n", (long long)42, (long long)42);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("2 testlling %%lld %%lli '%lld' '%lli'\n", (long long)-42, (long long)-42);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("3 zeros %%lld %%lli '%lld' '%lli'\n", (long long)0, (long long)0);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("4 testlling %%+lli %% lld '%+lli' '% lld'\n", (long long)2147483647, (long long)(-2147483647 - 1));
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("5 testlling %%.1lld %%+.1lli %% lld '%.1lld' '%+.1lli' '% lld'\n", (long long)42, (long long)2147483647, (long long)(-2147483647 - 1));
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("6a %%-10000.8 '%%10' '%-10000.8lld'\n", (long long)-123423);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("6b %%-10.8000 '%-10.8000lld'\n", (long long)-123423);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("6b %%010000.8000 '%010000.8000lld'\n", (long long)-123423);
		printf_ptr("ret is %d\n", ret);

	long long	signed_long_long[] = {0, 42, -10, LONG_LONG_MAX, LONG_LONG_MIN};
	i = 0;

	while (i < 4)
	{
		ret = printf_ptr("7 '%%' '%lld' '%lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("8 '%%10' '%10lld' '%10lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("9 '%%.10' '%.10lld' '%.10lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("10 '%%5.1' '%5.1lld' '%5.1lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("11 '%%5.0' '%5.0lld' '%5.0lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("12 '%%010' '%010lld' '%010lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("13 '%%05.0' '%05.0lld' '%05.0lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("14 '%%01.5' '%01.5lld' '%01.5lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("15 '%%+1.5' '%+1.5lld' '%+1.5lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("16 '%%+1.5' '%+1.5lld' '%+1.5lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("18 '%%-+1.5' '%-+1.5lld' '%-+1.5lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("19 '%%-+1.5' '%-+1.5lld' '%-+1.5lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("20 '%% -1.5' '% -1.5lld' '% -1.5lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);
		
		ret = printf_ptr("21 '%% -1.0' '% -1.0lld' '% -1.0lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("22 '%% -10.10' '% -10.10lld' '% -10.10lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("23 '%% -10' '% -10lld' '% -10lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		ret = printf_ptr("24 '%%.' '%.lld' '%.lli'\n", signed_long_long[i], signed_long_long[i]);
		printf_ptr("ret is %d\n", ret);

		printf_ptr("\n---------------------------\n\n");
		i++;
	}
}
