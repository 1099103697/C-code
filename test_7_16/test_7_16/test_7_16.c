#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//把数组初始化0
//	Print(arr, sz);//打印
//	Reverse(arr, sz);
//	Print(arr, sz);//打印
//	return 0;
//
//}


//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short *)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//
//}

//int i;//全局变量不初始化，默认是0
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111=i
//	if (i > sizeof(i))//sizeof()--计算变量/类型所占内存大小>=0无符号数
//	//          4 
//	{
//		printf(">\n");
//
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


int main()
{
	int a, b, c;
	a = 5;
	c = ++a;//c=6 a=6
	b = ++c, c++, ++a, a++;//c=8 b=7 a=8
	b += a++ + c;//c=23 a=9
	printf("a=%d b=%d c=%d\n", a, b, c);
	return 0;
}