#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	short s=0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2
//	printf("%d\n", s);
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	//~按二进制取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110-反码
//	//10000000000000000000000000000001-原码
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 11;
//	a = a | (1<<2);
//	printf("%d\n", a);
//	a = a&(~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//先++,后使用
//	printf("%d\n", a++);//先使用，后++
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++&&++b&&d++;
//	i=a++||++b||d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	//b = (a > 5 ? 3 : -3);//三目操作
//	return 0;
//}

//逗号表达式
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//	return 0;
//}

//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//

//学生
//int float
//创建一个结构体类型-struct Stu

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三", 20, "201910305" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//结构体变量.成员名
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011--a
//
//	char b = 127;
//	//01111111--b
//	//a和b如何相加
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//
//	char c = a + b;
//	//10000010--c
//	//11111111111111111111111110000010补码
//	//11111111111111111111111110000001反码
//	//10000000000000000000000001111110原码
//	printf("%d\n",c);
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}


