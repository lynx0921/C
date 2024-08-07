#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//输入两个实数，用一个函数求出它们的和
//int main()
//{
//	int sum(int x, int y);
//	int a, b, c;
//	scanf("%d,%d", &a, &b);
//	c = sum(a, b);
//	printf("sum is %d", c);
//	return 0;
//}
//int sum(int x, int y)
//{
//	return (x + y);
//}

//嵌套调用
//int max2(int x, int y)
//{
//	int t;
//	t = x > y ? x : y;
//	return t;
//}
//int main()
//{
//	int max4(int x, int y, int z, int r);
//	int a, b, c, d, e;
//	
//	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
//	e = max4(a, b, c, d);
//	printf("the max is %d", e);
//
//	return 0;
//}
//int max4(int x, int y, int z, int r)
//{
//	int t, g, h;
//	t = max2(x, y);
//	g = max2(z, r);
//	h = max2(t, g);
//
//	return h;
//}

//int main()
//{
//	int age(int x);
//	int a;
//	a = age(5);
//	printf("%d", a);
//
//}
//int age(int x)
//{
//	if (x == 1)
//		return 10;
//	else
//		return age(x - 1) + 2;
//}

//n!=?
//int main()
//{
//	int c(int n);
//	int a;
//
//	printf("Please enter an number.\n");
//	scanf("%d", &a);
//
//	printf("%d!=%d\n", a, c(a));
//
//	return 0;
//}
//int c(int n)
//{
//	
//	if (n == 1)
//		return 1;
//	else
//		return c(n - 1) * n;
//}

//河内塔问题
int main()
{
	void in(char one, char two, char three, int x);
	int i;
	printf("Please enter the number of diskes:");
	scanf("%d", &i);
	printf("move %d diskes:\n",i);
	in( 'A', 'B', 'C',i);

	return 0;
}
void in(char one, char two, char three, int x)
{
	void move(char x, char y);

	if (x == 1)
		move(one, three);
	else
	{
		in(one, three, two, x - 1);
		move(one, three);
		in(two, one, three,x-1);
	}
}
void move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}