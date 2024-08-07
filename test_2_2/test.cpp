#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//输入10个数，要求输出其中值最大的元素和该数是第几个数
//int main()
//{
//	int max(int x, int y);
//	int a[10],i,j,m,k;
//
//	printf("Please enter 10 integer number.\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("a[%d]=", i+1);
//		scanf("%d", &a[i]);
//	}
//
//	printf("\n");
//	for (j = 0,m=a[0]; j < 10; j++)
//	{
//		if (max(a[j], m) > m)
//		{
//			m = max(a[j], m);
//			k = j+1;
//		}
//	}
//
//	printf("max=%d\n", max(a[j], m));
//	printf("%dth number\n", k);
//
//	return 0;
//}
//int max(int x, int y)
//{
//	int c;
//	c = x > y ? x : y;
//	return (c);
//}

//average
//int main()
//{
//	float average(int x[10]);
//	int i,j,m;
//	int score[10];
//
//	printf("Please enter the score:\n");
//
//	for (j = 0;j<=9; j++)
//	{
//		printf("The score of the student %d:", j+1);
//		scanf("%d", &score[j]);
//	}
//
//	average(score);
//
//	printf("The average is %f", average(score));
//
//	return 0;
//}
//float average(int x[10])
//{
//	int sum = 0;
//	for (int j = 0; j <= 10; j++)
//	{
//		sum = sum + x[j];
//	}
//	return sum / 10;
//}

//common average;
//int main()
//{
//	float average(float array[], int n);
//	float score1[5] = { 98.5,97,91.5,60,55 };
//	float score2[10] = { 67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5 };
//	printf("%f\n", average(score1, 5));
//	printf("%f\n", average(score2, 10));
//	return 0;
//}
//float average(float array[], int n)
//{
//	int i;
//	float aver, sum = array[0];
//	for (i = 1; i<n; i++)
//		sum = sum + array[i];
//	aver = sum / n;
//	return (aver);
//}

int main()
{
	int a[10], i;
	int rank(int array[], int i);
	printf("Please enter the string;");
	for (i = 0; i < 10; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	rank(a, 10);
	printf("rank:");
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}
int rank(int array[], int n)
{
	int i,j,t,m;
	for (i = 0; i < n-1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (array[j]<array[i])
			{
				t = array[j];
				m = array[i];
				array[i] = t;
				array[j] = m;
			}
		}
	}
}