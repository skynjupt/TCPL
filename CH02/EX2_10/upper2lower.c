#include <stdio.h>
#include <string.h>

void lower(char *p)
{
	int i, n;

	n = strlen(p);
	for(i = 0; i < n; i++)
	{
		p[i] <= 'Z' && p[i] >= 'A' ? p[i] += 'a' - 'A':' ';
	}
}

int main(int argc, char *argv[])
{
	char a[] = "Hello World!";
	lower(a);
	printf("----%s-----\n", a);
	return 0;
}
