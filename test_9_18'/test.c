#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio,h>

int main()
{
	float a, b;

	b = 1 + 2e20;
	a = b - 2e20;


	printf("%f\n", a);



	return 0;
}