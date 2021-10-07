__ALX LOW LEVEL PROGRAMMING__

_0x12-Singly_Linked_Lists_
#
__NOTE:__ 
#
* No more than five functions per file
* The only C std library functions allowed are malloc, free and exit. Any use of functions like printf, calloc, realloc etc... is forbidden.
* You are allowed to use \_putchar
* The prototypes of all your functions and that of \_putchar should be included in your header file called lists.h
* Don't forget to push your header file and make sure it is include guarded.
#
#MORE INFO
Please use this data structure for this project:
``` C 
/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
```
#TASKS

0. Write a function that prints all the elements of a list_t lis.
	* If str is NULL, print [0] (nill)
	* You are allowed to use printf
#

1. Write a function that returns the number of elements in a linked list_t list.
#

2. Write a function that adds a new node at the beginning of a list_t list.
	* str needs to be duplicated
	* You are allowed to strdup
#

3. Write a function that adds a new node at the end of a list_t list.
	* str needs to be duplicated
	* You are allowed to use strdup
#

4. Write a function that frees a list_t list.
#

5. Write a function that prints You're beat! and yet, you must allow, \nI bore my house upon my back!\n before the main function is executed.
	* You are allowed to use the printf function
#

6. Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
	* You are only allowed to use the printf function
	* You are not allowed to use interrupts
	* Your program will be compiled using nasm and gcc:
```
julien@ubuntu:~/$ nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
julien@ubuntu:~/$ ./hello
Hello, Holberton

julien@ubuntu:~/$
```
#
#
