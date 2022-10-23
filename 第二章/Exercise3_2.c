#include<stdio.h>
int main05() {
	int a = 96;
	double x = 12.345;
	char ch = 'A';
	printf("%-4d%,%4d\n", a, a);
	printf("%10.2f,%10.2e\n", x, x);
	printf("%c,%c\n", ch, ch + 32);
}