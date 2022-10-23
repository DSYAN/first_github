#include<stdio.h>
int main03()
{
	char a, b;
	a = getchar();
	getchar();/*ºöÂÔ»Ø³µ·û*/
	b = getchar();
	printf("The first grade is:");
	putchar(a);
	putchar('\n');
	printf("The second grade is:");
	putchar(b);
	return 0;
}