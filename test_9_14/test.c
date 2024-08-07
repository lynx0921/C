#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////编译练习6
//int main()
//{
//	//定义
//	int toes,twotoes,toes2;
//
//	//赋值
//	toes = 10;
//	twotoes = 2 * toes;
//	toes2 = toes * toes;
//
//	//打印
//	printf("toes=%d\n",toes);
//	printf("2toes=%d\n", twotoes);
//	printf("toes2=%d\n", toes2);
//
//	return 0;
//}
//
////编程练习7
//
////告知编译器
//void smile();
//
////定义函数
//void smile()
//{
//	printf("Smile!");
//}
//
////运行函数
//int main()
//{
//	smile();
//	smile();
//	smile(); printf("\n");
//	smile();
//	smile();
//	printf("\n");
//	smile();
//	
//	return 0;
//}

//编程练习8

//告知编译器
void one_three(),two();

//定义函数
void one_three()
{
	printf("one\n");
	two();
	printf("three\n");

}
void two()
{
	printf("two\n");
}

//运行函数
int main()
{
	printf("starting now\n");
	one_three();
	printf("done!\n");

	return 0;
}