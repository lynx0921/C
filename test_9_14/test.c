#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////������ϰ6
//int main()
//{
//	//����
//	int toes,twotoes,toes2;
//
//	//��ֵ
//	toes = 10;
//	twotoes = 2 * toes;
//	toes2 = toes * toes;
//
//	//��ӡ
//	printf("toes=%d\n",toes);
//	printf("2toes=%d\n", twotoes);
//	printf("toes2=%d\n", toes2);
//
//	return 0;
//}
//
////�����ϰ7
//
////��֪������
//void smile();
//
////���庯��
//void smile()
//{
//	printf("Smile!");
//}
//
////���к���
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

//�����ϰ8

//��֪������
void one_three(),two();

//���庯��
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

//���к���
int main()
{
	printf("starting now\n");
	one_three();
	printf("done!\n");

	return 0;
}