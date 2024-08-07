#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i=10, j=1;
//	int* i_pointer, *j_pointer;/* 此处*与类型名在一起。此时共同定义指针变量 */
//
//	i_pointer = &i;
//	j_pointer = &j;
//
//	printf("i=%d,j=%d\n", i, j);
//	printf("*i_pointer=%d,*j_pointer=%d\n", *i_pointer, *j_pointer);
//	/* 此处*与指针变量一起使用。此时代表指针变量所指向的变量 */
//
//	return 0;
//}

//输入a和b两个整数，按先大后小的顺序输出a和b

//int main()
//{
//	int a, b, * max, * min, *i;
//	printf("Enter the integer number:\n");
//	printf("a=");
//	scanf("%d", &a);
//	printf("b=");
//	scanf("%d", &b);
//
//	max = &a;
//	min = &b;
//
//	if (a < b)
//	{
//		i = max;
//		max = min;
//		min = i;
//	}
//
//	printf("%d\t%d", *max, *min);
//
//	return 0;
//}

//用函数解决
//int main()
//{
//	void change(int *x, int *y);
//	int a, b, * max, * min;
//	printf("Enter the integer number:\n");
//	printf("a=");
//	scanf("%d", &a);
//	printf("b=");
//	scanf("%d", &b);
//
//	max = &a;
//	min = &b;
//
//	if (a < b)
//		change(max, min);
//
//	printf("%d\t%d", *max, *min);
//
//	return 0;
//}
//void change(int *x, int *y)
//{
//	int i;
//	i = *x;
//	*x = *y;
//	*y = i;
//
//}