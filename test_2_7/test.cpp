#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//print 1*2*3*4*5
//int main()
//{
//	int i;
//	int fac(int m);
//	for (i = 1; i < 5; i++)
//	{
//		fac(i);
//	}
//	printf("%d", fac(i));
//	return 0;
//}
//int fac(int m)
//{
//	static int a = 1;
//	a = a * m;
//	return a;
//}

//求三个整数中的大者
//int main()
//{
//	int max();
//	extern int A, B, C;
//	scanf("%d %d %d", &A, &B, &C);
//	printf("max is %d\n", max());
//
//	return 0;
//}
//int A, B, C;
//int max()
//{
//	int m;
//	m = A > B ? A : B;
//	if (C > m)
//		m = C;
//	return (m);
//}

int main()
{
	int fuc(int a, int b);
	extern int a, b,c;
	int d = 9;

	printf("a=");
	scanf("%d", &a);
	printf("m=");
	scanf("%d", &b);
	
	printf("a*b=%d\n", a * d);
	printf("a^m=%d\n", fuc(a, b));


	return 0;
}