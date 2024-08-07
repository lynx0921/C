#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////求1000！的值
//int main()
//{
//	int i, t;
//	i = 1;
//	t = 2;
//
//	while(i<=5)
//	{
//		t = t * i;
//		i = i + 1;
//	}
//
//	printf("%d\n", t);
//
//	return 0;
//}

//输入a，b，c三个值，输出其中最大值
int main()
{
	int a, b, c,d,m;
	int max(int x, int y);
	a = 0;
	b = 0;
	c = 0;
	

	printf("Please enter the numble you want to compare\n");
	scanf("%d %d %d", &a, &b, &c);

	max(a, b);
	d = max(a, b);

	max(d, c);
	m = max(d, c);

	printf("%d\n", m);

	return 0;
}
int max(int x, int y)
{
	int z;
	if (x >y)
	z = x;
	else z = y;

	return z;
}

//#include <stdio.h>
//int main()
//{
//    int a, b, c, max;
//    scanf("%d %d %d", &a, &b, &c);
//    max = a;
//    while(1)
//    {  if (max < b)
//        max = b;
//
//    if (max < c)
//        max = c;
//    }
//   
//    printf("The largest number is %d\n", max);
//    return 0;
//}