#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//��һԪ���η��̵Ľ�
//int main()
//{
//	double a, b, c, disc, x1, x2;
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	
//	if (disc < 0)
//		printf("has not real roots\n");
//	else
//	{
//		x1 = ( - b + sqrt(disc)) / (2 * a);
//		x2 = (-b - sqrt(disc)) / (2 * a);
//		printf("real roots:\nx1=%lf\nx2=%lf\n", x1, x2);
//	}
//	return 0;
//}

//��������ʵ����������ֵ��С�����˳�������������
//int main()
//{
//	float a, b;
//
//	scanf("%f,%f", &a, &b);
//
//	if (a > b)
//		printf("%f>%f", a, b);
//	else
//	{
//		printf("%f>%f", b, a);
//	}
//
//	return 0;
//}
//
//����˼ά����
//int main()
//{
//	float a, b, t;
//
//	scanf("%f,%f", &a, &b);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;		
//	}
//
//	printf("%5.2f,%5.2f", a, b);
//
//	return 0;
//}

//����3����a��b��c��Ҫ����С�����˳�����
////��������С��������ĺ���
//
//int main()
//{
//	int change(float x, float y);
//	float a, b;
//
//	scanf("%f,%f", &a, &b);
//
//	if (a > b)
//		change(a, b);
//	
//	printf("%f\t%f", a, b);
//
//	return 0;
//}
//void change(float x, float y)
//{
//	float t;
//	
//		t = x;
//		x = y;
//		y = t;
//	
//}
//int main()
//{
//	float a=0, b=0, c=0;
//	int change(float x,float y);
//
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//
//	change(a, b);
//	change(b, c);
//	change(a, b);
//
//	printf("%5.2f\t%5.2f\t%5.2f", a, b, c);
//
//	return 0;
//}
//

//����������a,b,c, Ȼ����������С��������
//����˼ά�������ƺ��漰ָ�룬���ȸ���
//int main()
//{
//	void change(int *m1, int *m2);
//	int a, b, c,*t1,*t2,*t3;
//	t1 = &a;
//	t2= &b;
//	t3 = &c;
//
//	scanf("%d,%d,%d", &a, &b, &c);
//
//	change(t1,t2);
//	change(t2,t3);
//	change(t1,t2);
//
//	printf("%d\t%d\t%d\n",*t1,*t2,*t3);
//
//	return 0;
//}
//void change(int *t1, int *t2)
//{
//	int t;
//	if (*t1 > *t2)
//	{
//		t = *t1;
//		*t1 = *t2;
//		*t2 = t;
//	}
//}

//����3����abc��Ҫ����С��������
int main()
{
	int a, b, c,t;

	scanf("%d,%d,%d", &a, &b, &c);

	if(a>b)
	{
		t = a; 
		a = b; 
		b = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}

	printf("%d\t%d\t%d\n", a, b, c);

	return 0;
}

