/*
 * Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.
 */ 
#include <stdio.h> 
#include <string.h>

#define ORIGINAL		0
#define SOLUTION		0
#define PORTABLE_SOLUTION	1
#define TEST			1

#if ORIGINAL
int lower(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return c+'a'-'A';
	}
	else
	{
		return c;
	}
}
#endif

#if SOLUTION
int lower(int c)
{
	return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c; 
}
#endif

#if PORTABLE_SOLUTION
int lower(int c)
{
	char *Uppercase = "ABCDEFGHIJKLNMOPQRSTUVWXYZ";
	char *Lowercase = "abcdefghijklnmopqrstuvwxyz";
	char *p = NULL;
	
	return (NULL == (p = strchr(Uppercase, c)) ? c:*(Lowercase+(p-Uppercase))) ;
}
#endif
#if TEST
int main(int argc, char *argv[])
{
	char *Tests="AaBb32CcdD3e2EfFGghHii2IJjK32kL32lMmNnOopPQqRrSsTtUuVvWwXx23yYzZ";
	char *p = Tests;
	
	while('\0' != *p)
	{
		printf("%c ==> %c\n", *p, lower(*p));
		p++;
	}
	
	/*add the obligatory boundary test*/
	printf("\\0 ==> %d\n", lower(0));
	return 0;
}
#endif
