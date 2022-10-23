#include<stdio.h>
int main07() {
	const double pi = 3.1415926;
	double r, h;
	double volume, area;
	printf("Please input radius and height:");
	scanf_s("%lf%lf", &r, &h);
	volume = pi * r * r * h;
	area = 2 * pi * r * h+2*pi*r*r;
	printf("volume=%.3f\narea=%.3f", volume, area);
	return 0;
}