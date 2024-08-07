#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//成绩分级

//if做法
//int main()
//{
//	char a;
//
//	scanf("%c", &a);
//
//	if (a == 'A')
//		printf("grade>=85");
//	else if (a == 'B')
//		printf("grade<85&&>=70");
//	else if (a == 'C')
//		printf("grade<70&&>=60");
//	else
//		printf("grade<60");
//
//	return 0;
//}

//用switch语句
//int main()
//{
//	char a;
//
//	printf("Enter your grade.\n");
//	scanf("%c", &a);
//	printf("Your score:");
//
//	switch (a)
//	{
//	case 'A':printf(">=85"); break;
//	case 'B':printf("70~84"); break;
//	case 'C':printf("60~69"); break;
//	case 'D':printf("<60"); break;
//	default:printf("enter data error!");
//	}
//	
//	return 0;
//}

//用switch语句实现菜单功能
//int main()
//{
//	void action1(), action2();
//	char a;
//
//	a = getchar();
//
//	switch (a)
//	{
//	case'a':
//	case'A':action1(); break;
//	case'b':
//	case'B':action2(); break;
//	default:putchar('\a');
//	}
//
//	return 0;
//}
//void action1()
//{
//	printf("action 1 start.");
//}
//void action2()
//{
//	printf("action 2 start.");
//}

//求100！

//使用while语句
//int main()
//{
//	int b=0,a = 1;
//
//	while (a<=100)
//	{
//		b = b + a;
//		a++;
//	}
//
//	printf("100!=%d\n", b);
//
//	return 0;
//}

//使用do---while语句
//int main()
//{
//	int sum = 0, i = 1;
//
//	do
//	{
//		sum = sum + i;
//		i++;
//	} while (i <= 100);
//
//	printf("sum=%d", sum);
//
//	return 0;
//}

//用for语句
//int main()
//{
//	int sum = 0,i=1;
//
//	for ( ;i <= 100; i++)
//	{
//		sum = sum +i;
//	}
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

