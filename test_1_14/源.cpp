#define _CRT_SECURE_NO_WARNINGS 1

//用到函数库中的输入输出函数
#include <stdio.h>


////打印“This is a C program.”
//
//int main()
////main是函数的名字，表示主函数（C程序必须有一个main函数）
////int表示函数类型
//{
//
//	//输出函数printf（）
//	//\n是换行符
//	printf("This is a C program.\n");
//	//；表示语句结束
//
//	//当main函数执行结束前将整数0作为函数值
//	return 0;
//
//}
//求两个整数之和
//int main()
//{
//	//设置3个变量
//	int a, b, sum;
//	//a，b存放整数
//	a = 5;
//	b = 7;
//	//将sum初始值设为0
//	sum = 0;
//
//	//用赋值运算符“=”把结果传送给sum
//	sum = a + b;
//
//	//打印结果验证
//	printf("%d and %d sum is %d\n",a,b,sum);
//
//	return 0;
//}

//求两个整数中和较大者

int main()
{
	//声明使用自定义函数max（int x，int y）
	int max(int x, int y);
	int a, b, c;

	printf("请问您想比较哪两个数的大小？（数与数之间用，分隔）\n");

	//输入函数scanf（）
	scanf("%d,%d", &a, &b);

	//调用max（int x，int y）函数
	c = max(a,b);
	printf("较大的数是%d\n",c);
	return 0;
}

//定义函数max（int x，int y）
int max(int x,int y)
{
	int z;
	if (x > y)z = x;
	else z = y;
	return (z);
}
