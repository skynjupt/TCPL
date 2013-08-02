/*
 * Exercise 2-1. Write a program to determine the ranges of char, short, int,
 * and long variables, both signed and unsigned, by printing appropriate values
 * from standard headers and by direct computation. Harder if you compute them:
 * determine the ranges of the various floating-point types.
 */
#include <stdio.h>
#include <limits.h>
#include <float.h>

#define PRINT_BY_STD_HEADER	1
#define PRINT_BY_COMPUTATION	0

int main(int argc, char *argv[])
{
#if PRINT_BY_STD_HEADER
	printf("-------------print by std head----------------\n");
	printf("the ranges of signed char:%d~%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("the ranges of unsigned char:%d~%d\n", 0, CHAR_MAX);
	printf("the ranges of signed short:%d~%d\n", SHRT_MIN, SHRT_MAX);
	printf("the ranges of unsigned short:%d~%d\n", 0, USHRT_MAX);
	printf("the ranges of signed int:%d~%d\n", SHRT_MIN, SHRT_MAX);
	printf("the ranges of unsigned int:%d~%d\n", 0, UINT_MAX);
	printf("the ranges of signed int:%d~%d\n", INT_MIN, INT_MAX);
#endif
	return 0;
}


