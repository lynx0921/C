#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int a, b, c;
int fuc(int a,int b)
{
	c = 1;
	for (int i = 1; i <= b; i++)
	{
		c = c * a;
	}
	return (c);
}