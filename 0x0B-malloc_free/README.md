__ALX LOW LEVEL PROGRAMMING__

_0x0B-Malloc_Free_

__________________________________________________________________________________________________________________

__NOTE: You are only allowed to malloc and free standard libraries__

__*******************************QUESTIONS**************************************__

* 0. Write a function that creates an array of chars, and initializes it with a specific char.

     _Prototype: char *create_array(unsigned int size, char c);_
     _Returns NULL if size = 0_
     _Returns a pointer to the array, or NULL if it fails_

* 1. Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

     _Prototype: char *_strdup(char *str);_
     _The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free._
     _Returns NULL if str = NULL_
     _On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available_

* 2. Write a function that concatenates two strings.

     _Prototype: char *str_concat(char *s1, char *s2);_
     _The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated_
     _if NULL is passed, treat it as an empty string_
     _The function should return NULL on failure_

* 3. Write a function that returns a pointer to a 2 dimensional array of integers.

     _Prototype: int **alloc_grid(int width, int height);_
     _Each element of the grid should be initialized to 0_
     _The function should return NULL on failure_
     _If width or height is 0 or negative, return NULL_

* 4. Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

     _Prototype: void free_grid(int **grid, int height);_
     _Note that we will compile with your alloc_grid.c file. Make sure it compiles._

_______________________________________________________________________________________________________________________________________________________
__ADVANCED__
_____________________________________________________________________________________________________________________________________________________

* 5. Write a function that concatenates all the arguments of your program.

     _Prototype: char *argstostr(int ac, char **av);_
     _Returns NULL if ac == 0 or av == NULL_
     _Returns a pointer to a new string, or NULL if it fails_
     _Each argument should be followed by a \n in the new string_

* 6. Write a function that splits a string into words.

     _Prototype: char **strtow(char *str);_
     _The function returns a pointer to an array of strings (words)_
     _Each element of this array should contain a single word, null-terminated_
     _The last element of the returned array should be NULL_
     _Words are separated by spaces_
     _Returns NULL if str == NULL or str == ""_
     _If your function fails, it should return NULL_

____________________________________________________________________________________________________________________________________________________