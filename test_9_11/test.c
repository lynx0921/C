#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void) //��2Ӣ��ת����Ӣ��
//{
//	int feet, fathoms;
//	fathoms = 2;
//	feet = 6 * fathoms;
//	printf("There are %d feet in %d fathomd!\n",feet, fathoms);
//	printf("Yes,I said %d feet !\n", 6 * fathoms);
//
//	return 0;
//}
void butler(void);//����ԭ�ͣ���֪������Ҫʹ�ô˺���
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();//��������
	printf("Yes.Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void) // ���庯��
{
	printf("You rang, sir?\n");
} 