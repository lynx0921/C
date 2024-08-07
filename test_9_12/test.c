#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main(void)
//(
//	int n, int n2, int n3;
//n = 5;
//n2 = n * n;
//n3 = n2 * n2;
//
//	return 0;
//	)
// 

//
////示例语法错误
//int main(void)
////此处应用花括号
//[
//	printf(hello, world!);//此处无双引号
//	return 0//此处无分号
//]

////示例语义错误
//int main(void)
//{
//	int n, n4;
//	n = 3;
//	n4 = n * n * n;//此处应n4=n*n*n*n;
//	printf("%d", n4);
//
//	return 0;
//}


//int main(void)//复习题7
//{
//	int words, lines;
//	lines = 350;
//	words = 3020;
//	printf("There were %d words and %d lines.\n",words,lines);
//
//	return 0;
//}
int main(void)
{
	int x, y;

	x = 10;
	y = 5;
	y = x + y;
	x = x * y;

	printf("x=%d\n,y=%d\n", x, y);

	return 0;
}
