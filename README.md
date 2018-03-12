#Libft

##Description
This project contains many reimplementations of standard C functions created by Jacob Polloreno. For
learning purposes.

##Getting Started
* Note: tested on Mac OS High Sierra
1. `git clone https://github.com/JacobPolloreno/42LIBFT.git libft`
2. `cd libft`
3. run `make` to compile the library and produce a `libft.a` file
4. to make use of the library run `gcc -L. -lft your_c_file.c` while in the `libft/` directory
	a. you can move the `libft.a` file into your project repo **but** you must also copy over the
	`libft.h` header file
	b. if you decide to move the library, run `gcc -L<path_to_library> -lft your_c_file.c`
5. Makefile commands:
	* `re`, `clean`, `fclean`, `all`, `make_test`, `clean_test`, and `run_test`

### To Run Unit Test
1. `brew install check` to install the testing framework
2. you may need to change the paths found in the Makefile under `TEST_HEADER` and `TEST_LIBRARY` to
   point the check file
3. `make run_test` will compile the test file in `tests/libft.check` and run the test
**Note: the test framework takes advantage of the `checkmk` awk script to generate the check .c file
**Note 2: Unit test are not comprehensive but provide a stepping stone for test driven development
