#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void) //把2英尺转换成英尺
//{
//	int feet, fathoms;
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet in %d fathomd!\n",feet, fathoms);
//	printf("Yes,I said %d feet !\n", 6 * fathoms);
//
//	return 0;
//}
void butler(void);//函数原型，告知编译器要使用此函数
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();//函数调用
	printf("Yes.Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void) // 定义函数
{
	printf("You rang, sir?\n");
} 