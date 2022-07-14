#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 5 / 2;
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	//>>右移操作符
//	//移动的是二进制位
//	//00000000000000000000000000001000
//	int b=a >> 1;
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//00000000000000000000000000000101
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//&-按二进制与
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	//011
//	//101
//	//001
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;
//}


//^按2进制异或
//相同为0，相异为1
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}

//不创建第三个临时变量,实现交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("after:a=%d b=%d\n", a, b);
//	return 0;
//}


//计算二进制存储的1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//}
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;
//	a = a >> 1;
//	a >>= 1;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//取地址操作符
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof计算变量所占空间大小，单位是字节
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(arr));//40
//	return 0;
//}

