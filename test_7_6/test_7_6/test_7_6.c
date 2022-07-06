#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//		default:
//			printf("hellow");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}



//从大到小排列
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//1-100被三整除的数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf(" %d", i);
//	}
//	return 0;
//}


//两数最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}



////计算1000-2000年的闰年
////1.能被4整除并且不能被100整除是闰年
////2.能被400整除是闰年
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf(" %d", year);
//			count++;
//		}
//		else if (year % 400 ==  0)
//		{
//			printf(" %d", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//采用||合并
//int main()
//{
//	int count = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf(" %d", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//打印100-200之间的素数
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断规则
//		//1.试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf(" %d", i);
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//优化素数算法
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断规则
//		//1.试除法
//		//产生2->i-1
//		int j = 0;
//		//小于开平方i
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf(" %d", i);
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

