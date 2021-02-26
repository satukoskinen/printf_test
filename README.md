# printf_test

Tests for the Hive ft_printf project of recreating the C printf function.

To run the tests, first clone this repo in the root of your ft_printf project:
```
git clone https://github.com/satukoskinen/printf_test.git test
```
Then modify the ``run.sh`` script configuration to have the correct include and library paths. 

The script is divided in four parts:
1) testing norminette,
2) testing make,
3) running basic tests for ft_printf against printf and
4) checking for leaks with either valgrind or the system ``leaks`` command.

Norme testing is commented out by default, as well as the tests for all required make commands
(make, make all, make clean, make fclean, make re). Basic tests will be run separately for
strings & chars (%s, %c, %%) , signed integers (%d, %i), unsigned integers (%o, %u, %x, %X),
pointers (%p) and doubles (%f, %F). For each of the conversions, tests are run on length modifiers
l, ll, h, hh for integers and L for doubles. The leaks test will run the system leaks command by default,
but it can be switched to valgrind by uncommenting the lines in the script.
