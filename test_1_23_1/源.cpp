#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////输出100~200之间不能被3整除的数
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//输出4*5的矩阵
//int main()
//{
//	for (int i = 1; i <= 20; i++)
//	{
//		printf("%d\t", i);
//		if (i % 5 == 0)
//			printf("\n");
//		if (i % 5 == 0)
//			continue;
//	}
//	return 0;
//}

//chart two
//int main()
//{
//	int i, j, n = 0;
//	for(i=1;i<=4;i++)
//		for (j = 1; j <= 5; j++, n++)
//		{
//			if (n % 5 == 0&&n!=0) printf("\n");
//			printf("%d\t", i * j);
//		}
//	printf("\n");
//	return 0;
//}

//print Fibonacci
//int main()
//{
//	printf("1\t");
//
//	for (int i = 0, j = 1, q = 1, sum; q <= 39; q++)
//	{
//		sum = i + j;
//		printf("%d\t", sum);
//		i = j;
//		j = sum;
//	}
//
//		printf("\n");
//
//	return 0;
//}