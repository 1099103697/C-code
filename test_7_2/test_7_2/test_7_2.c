#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int max = 0;
//	max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = { 1, 2, 5, 3, 4 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	//int c = a&&b;
//	int c = a || b;
//	printf("c=%d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*p=&a;
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	*p = 20;
//	printf("%d\n",a);
//
//	return 0;
//
//}
//int main()
//{
//	char ch = 'w';
//	char*pc = &ch;
//	printf("%d\n", sizeof(pc));
//	//*pc = 'a';
//	//printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	double d = 3.14;
//	double*pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	return 0;
//}
struct Book
{
	char name[20];
	short price;
};
int main()
{
	struct Book b1 = { "C语言设计", 55 };
	struct Book*pb = &b1;
	strcpy(b1.name, "C++");
	printf("书名:%s\n", pb->name);
	printf("价格：%d\n", pb->price);
	return 0;
}