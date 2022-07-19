#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ",10 - i);
//	}
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	printf("heh\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp=%d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("heh\n");
//		arr[i] = 0;
//
//	}
//	system("pause");
//	return 0;
//}


//void my_strcpy(char *dest, char *src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//'\0'
//}
//
//int main()
//{
//	char arr1[] = "####################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char *dest,const char *src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}//优化,arr2输入空指针时，断言,指出错误位置
//
//
//int main()
//{
//	char arr1[] = "####################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


