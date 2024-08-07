#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	float a, b, c, area;
//	scanf("%f,%f,%f", &a, &b, &c);
//
//	area = (a + b + c);
//
//	printf("%f", area);
//
//	return 0;
//}

//先后输出BOY三个字符
//int main()
//{
//	char a = 'B',b = 'O', c = 'Y';
//
//	putchar(a);
//	putchar(b);
//	putchar(c);
//
//	return 0;
//}

//从键盘输入BOY三个字符，然后把他们输出到屏幕
int main()
{
	char a, b, c;

	a=getchar();
	b=getchar();
	c=getchar();

	putchar(a);
	putchar(b);
	putchar(c);

	return 0;
}