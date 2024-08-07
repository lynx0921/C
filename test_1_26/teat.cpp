#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//对10个数组元素依次赋值，要求按逆序输出
//int main()
//{
//	int a[10];
//	for (int i = 0; i <= 9; i++)
//		a[i + 1] = i;
//
//	for (int j = 1; j <= 10; j++)
//		printf("%d\t", a[11 - j]);
//
//	return 0;
// }

//用数组处理求Fibonacci数列问题
//int main()
//{
//	int a[30] = {1,1,0};
//	int i;
//	for (i = 2; i < 30; i++)
//		a[i] = a[i - 1] + a[i - 2];
//	for (i = 0; i < 30; i++)
//		printf("%d\t", a[i]);
//	return 0;
//}

//int main()
//{
//	int i; int f[20] = { 1,1 };
//	for (i = 2; i < 20; i++)
//		f[i] = f[i - 2] + f[i - 1];
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0)
//			printf("\n");
//		printf("%12d", f[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int a[2][3] = { {1,2,3},{4,5,6} },b[3][2];
//	for (int i = 0; i <= 1; i++)
//	{
//		for (int j = 0; j <= 2; j++)
//		{
//			b[j][i] = a[i][j];
//		
//		}
//	}
//	for (int i = 0; i <= 2; i++)
//	{
//		for (int j = 0; j <= 1; j++)
//			printf("%5d", b[i][j]);
//		printf("\n");
//	}
//	
//}

