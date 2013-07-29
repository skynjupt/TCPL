#include <stdio.h> 
#include <string.h>

#define ORIGINAL	1
#define TEST		1

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
	return 0;
}
#endif
