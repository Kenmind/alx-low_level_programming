#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H
#define ABS(x) do {\
	x = (-1) * x;\
} while (x < 0)
#endif /* !FUNCTION_LIKE_MACRO_H */
