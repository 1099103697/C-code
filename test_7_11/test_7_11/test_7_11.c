#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//����һ������-������Ρ���10��
//	int arr[10]={1,2,3};//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5];
//	int n = 5;
//	//char ch[n];//[]ֻ���ǳ���
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i <= 6; i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//
//	for (i = 0; i <len; i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i <= 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char ch[5][6];
//	//int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };//��ά�����п���ʡ�ԣ��в���
//	
//	return 0;
//}

int main()
{
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
	int i = 0;
	for (i = 0; i <= 2; i++)
	{
		int j = 0;
		for (j = 0; j <= 3; j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
		}
		
	}
	
	return 0;
}