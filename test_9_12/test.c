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
////ʾ���﷨����
//int main(void)
////�˴�Ӧ�û�����
//[
//	printf(hello, world!);//�˴���˫����
//	return 0//�˴��޷ֺ�
//]

////ʾ���������
//int main(void)
//{
//	int n, n4;
//	n = 3;
//	n4 = n * n * n;//�˴�Ӧn4=n*n*n*n;
//	printf("%d", n4);
//
//	return 0;
//}


//int main(void)//��ϰ��7
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
