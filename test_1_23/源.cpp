#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////���100~200֮�䲻�ܱ�3��������
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}

//���4*5�ľ���
//int main()
//{
//	for (int i = 1; i <= 20; i++)
//	{
//		printf("%d\t", i);
//		if (i % 5 == 0)
//			printf("\n");
//		if (i % 5 == 0)
//			continue;
//	}
//	return 0;
//}

//chart two
int main()
{
	for (int i = 1, a; i <= 4;i++ )
	{
		a = i;

		do
		{
			printf("%d\t", i);
			i = i + a;
		} while (i % 5 == 0);
			printf("\n");
	}

	return 0;
}