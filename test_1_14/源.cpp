#define _CRT_SECURE_NO_WARNINGS 1

//�õ��������е������������
#include <stdio.h>


////��ӡ��This is a C program.��
//
//int main()
////main�Ǻ��������֣���ʾ��������C���������һ��main������
////int��ʾ��������
//{
//
//	//�������printf����
//	//\n�ǻ��з�
//	printf("This is a C program.\n");
//	//����ʾ������
//
//	//��main����ִ�н���ǰ������0��Ϊ����ֵ
//	return 0;
//
//}
//����������֮��
//int main()
//{
//	//����3������
//	int a, b, sum;
//	//a��b�������
//	a = 5;
//	b = 7;
//	//��sum��ʼֵ��Ϊ0
//	sum = 0;
//
//	//�ø�ֵ�������=���ѽ�����͸�sum
//	sum = a + b;
//
//	//��ӡ�����֤
//	printf("%d and %d sum is %d\n",a,b,sum);
//
//	return 0;
//}

//�����������кͽϴ���

int main()
{
	//����ʹ���Զ��庯��max��int x��int y��
	int max(int x, int y);
	int a, b, c;

	printf("��������Ƚ����������Ĵ�С����������֮���ã��ָ���\n");

	//���뺯��scanf����
	scanf("%d,%d", &a, &b);

	//����max��int x��int y������
	c = max(a,b);
	printf("�ϴ������%d\n",c);
	return 0;
}

//���庯��max��int x��int y��
int max(int x,int y)
{
	int z;
	if (x > y)z = x;
	else z = y;
	return (z);
}
