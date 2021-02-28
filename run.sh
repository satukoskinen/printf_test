#!/bin/sh

##############
### config ###
##############

CFLAGS="-Wall -Wextra -Werror -g" #compiler flags
#CFLAGS="-g"
INCLUDES="-I . -I include" #ft_printf.h location
LDFLAGS="-L . -l ftprintf" #static library and its location

test_srcs="printf_test/*.c"

#######################
### test norminette ###
#######################

#printf "\nTest norme... "
#norminette . > norm_output
#grep -B 1 "Error" norm_output > norm_errors
#if [ -s norm_errors ]
#then
#	printf "Norme errors:\n"
#	cat norm_errors
#	exit 1
#else
#	printf "Norme OK\n"
#fi

#rm -f norm_output norm_errors

#################
### test make ###
#################

make fclean && make && make clean
if [ $? != 0 ]
then
	exit 1
fi

#make all && make re && make fclean && make && make clean
#if [ $? != 0 ]
#then
#	printf "make error\n"
#	exit 1
#fi


###################
### basic tests ###
###################

for f in printf_test/*.test
do
	mv "$f" "${f%.test}"
done

rm -f test_exe

printf "\nBasic tests...\n"

gcc -o test_exe $CFLAGS $test_srcs $INCLUDES $LDFLAGS
if [ $? != 0 ]
then
	printf "compilation error"
	exit 1
fi

printf "\nTesting strings... "
{ ./test_exe ft_printf strings > user_output_strings; } 2> err_output
if [ $? != 0 ]
then
	printf "seg fault: run './test_exe ftprintf strings' for more info"
	cat err_output
	exit 1
fi
./test_exe printf strings > test_output_strings
diff --text --suppress-common-lines -p user_output_strings test_output_strings > diff_strings
if [ -s diff_strings ]
then
	printf "error, see diff_strings\n"
#	cat diff
#	exit 1
else
	printf "diff OK\n"
	rm diff_strings user_output_strings test_output_strings
fi

printf "\nTesting signed integers... "
{ ./test_exe ft_printf ints > user_output_ints; } 2> err_output
if [ $? != 0 ]
then
	printf "seg fault: run `./test_exe ftprintf ints` for more info"
	cat err_output
	exit 1
fi
./test_exe printf ints > test_output_ints
diff --text --suppress-common-lines -p user_output_ints test_output_ints > diff_ints
if [ -s diff_ints ]
then
	printf "error, see diff_ints\n"
#	cat diff
#	exit 1
else
	printf "diff OK\n"
	rm diff_ints user_output_ints test_output_ints
fi

printf "\nTesting unsigned integers... "
{ ./test_exe ft_printf uints > user_output_uints; } 2> err_output
if [ $? != 0 ]
then
	printf "seg fault: run `./test_exe ftprintf uints` for more info"
	cat err_output
	exit 1
fi
./test_exe printf uints > test_output_uints
diff --text --suppress-common-lines -p user_output_uints test_output_uints > diff_uints
if [ -s diff_uints ]
then
	printf "error, see diff_uints\n"
	#cat diff
	#exit 1
else
	printf "diff OK\n"
	rm diff_uints user_output_uints test_output_uints
fi

printf "\nTesting pointers... "
{ ./test_exe ptrs > ptr_output; } 2> err_output
if [ $? != 0 ]
then
	printf "seg fault: run `./test_exe ptrs` for more info"
	cat err_output
	exit 1
fi
line_count=$(cat ptr_output | wc -l | sed "s/ //g")
head -n $(( $line_count/2 )) ptr_output > user_output_ptrs
tail -n $(( $line_count/2 )) ptr_output > test_output_ptrs
diff --text --suppress-common-lines -p user_output_ptrs test_output_ptrs > diff_ptrs
if [ -s diff_ptrs ]
then
	printf "error, see diff_ptrs\n"
#	cat diff
#	exit 1
else
	printf "diff OK\n"
	rm diff_ptrs user_output_ptrs test_output_ptrs ptr_output
fi

printf "\nTesting doubles... "
{ ./test_exe ft_printf dbls > user_output_dbls; } 2> err_output
if [ $? != 0 ]
then
	printf "seg fault run `./test_exe ftprintf dbls` for more info"
	cat err_output
	exit 1
fi
./test_exe printf dbls > test_output_dbls
diff --text --suppress-common-lines -p user_output_dbls test_output_dbls > diff_dbls
if [ -s diff_dbls ]
then
	printf "error, see diff_dbls\n"
#	cat diff
#	exit 1
else
	printf "diff OK\n"
	rm diff_dbls user_output_dbls test_output_dbls
fi

printf "\nTesting long doubles... "
{ ./test_exe ft_printf ldbls > user_output_ldbls; } 2> err_output
if [ $? != 0 ]
then
	printf "seg fault run `./test_exe ftprintf ldbls` for more info"
	cat err_output
	exit 1
fi
./test_exe printf ldbls > test_output_ldbls
diff --text --suppress-common-lines -p user_output_ldbls test_output_ldbls > diff_ldbls
if [ -s diff_ldbls ]
then
	printf "error, see diff_ldbls\n"
#	cat diff
#	exit 1
else
	printf "diff OK\n"
	rm diff_ldbls user_output_ldbls test_output_ldbls
fi

for f in printf_test/*.[ch]
do
	mv "$f" "${f}.test"
done

###################
### test leaks ###
###################

printf "\nTesting leaks with valgrind...\n\n"
./test_exe ft_printf all valgrind > valgrind_output

#printf "\nTesting leaks with leaks...\n\n"
#./test_exe ft_printf all leaks > leaks_output
#grep -a -e "nodes malloced" -A 1 leaks_output

rm -f valgrind_output leaks_output err_output
