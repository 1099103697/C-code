#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ�����
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//Ұָ��
//1.û��ʼ��
//int main()
//{
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}
//2.Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	return 0;
//}
//3.ָ��ָ��Ŀռ��ͷ�
//int *test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;//��ʼ��
//	int *p = NULL;//NULL--������ʼ��ָ��
//	if (pa !=NULL)
//	{
//
//	}
//}

//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int *p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p = p + 1;
//	//}
//
//	int *p = &arr[9];
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p -1;
//	}//����
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


//int my_strlen(char *str)
//{
//	char *start = str;
//	char *end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr-&������-������������Ԫ�ص�ַ-��������ʾ��������-&������ȡ��������������ĵ�ַ
//	//2.sizeof��arr��-sizeof����������-��������ʾ����������-sizeof�������������������������Ĵ�С
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p======%p\n", p + i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int **ppa = &pa;//ppa���Ƕ���ָ��
//	printf("%d\n", **ppa);
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int *arr2[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ",*(arr2[i]));
	}
	return 0;
}