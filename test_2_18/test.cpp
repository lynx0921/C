#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i=10, j=1;
//	int* i_pointer, *j_pointer;/* �˴�*����������һ�𡣴�ʱ��ͬ����ָ����� */
//
//	i_pointer = &i;
//	j_pointer = &j;
//
//	printf("i=%d,j=%d\n", i, j);
//	printf("*i_pointer=%d,*j_pointer=%d\n", *i_pointer, *j_pointer);
//	/* �˴�*��ָ�����һ��ʹ�á���ʱ����ָ�������ָ��ı��� */
//
//	return 0;
//}

//����a��b�������������ȴ��С��˳�����a��b

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

//�ú������
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