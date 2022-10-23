#include<stdio.h>
int multiply(int a, int b)
{
	return a * b;
}
int main01() {
	int x, y, product;
	printf("Please input two integers:");
	scanf_s("%d%d", &x, &y);
	product = multiply(x, y);
	printf("the product is %d\n", product);
	return 0;
}