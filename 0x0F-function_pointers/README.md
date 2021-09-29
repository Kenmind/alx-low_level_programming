__ALX LOW LEVEL PROGRAMMING__

_0x0F-Function_Pointers_

__NOTE: _You are not allowed to use global variables
_	 No more than 5 function per file
_	 The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts,calloc, realloc etc... is forbidden__

||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||QUESTIONS||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||__

* 0. Write a function that prints a name.
	Prototype: void print_name(char *name, void (*f) (char *));

* 1. Write a function that executes a function given as a parameter on each elelment of an array.
	Prototype: void array_iterator(int *array, size_t size, void (*action) (int));
	where size is the size of the array
	and action is a pointer to the function you need to use

* 2. Write a function that searches for an integer.
	Prototype: int int_index(int *array, int size, int (*cmp) (int));
	where size is the number of elements in the array array
	cmp is a pointer to the function to be used to compare values
	int_index returns the index of the first element for which the cmp function does not return 0
	if no element matches, return -1
	if size <= 0, return -1

* 3. Write a program that performs simple operations.
	You are allowed to use the standard library
	Usage: calc num1 operator num2
	You can assume num1 and num2 are integers, so use the atoi function to convert them from the string input to int
	operator is one of the following:
		+: addition
		-: subtraction
		*: multiplication
		/: division
		%: modulo
	The program prints the result of the operation, followed by a new line
	You can assume that the result of all operations can be stored in an int
	If the number of arguments is wrong , print Error, followed by a new line, and exit with status 98
	If the operator is none of the above , print Error, followed by a new line, and exit with status 99
	If the user tries to divide (/ or %) by 0, Error followed by a new line, and exit with the status 100

	This task requires that you create four different files.
___	3-calc.h
_	3-op_functions.c__
___	3-get_op_func.c
_	3-main.c__

* 4. Write a program that prints the opcodes of its own main function
