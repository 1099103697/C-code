#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i++;
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	//��ʼ��  �ж�   ����
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}


//int main()
//{
//	for (;;)
//	{
//		printf("hhe\n");
//	}
//	return 0;
//}//��ѭ��

//int main()
//{
//	int i = 0;
//	int k = 0;
//	//              k��ֵ0��Ϊ�٣�����ѭ��
//	for (i = 0, k = 0; k = 0; i++, k++)
//
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	} while (i < 10);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}//�׳�

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum=0;
//	for (n = 1; n <= 3; n++)
//	{
//		
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}//�׳��ۼ�

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k =17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//		if (i == sz)
//			printf("�Ҳ���\n");
//	
//	return 0;
//}//����


//int main()
//{
//	int k = 7;
//	int arr[] = { 1, 2, 3, 4, 5, 6,7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}//�۰�����㷨



#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	/*int right = sizeof(arr1) / sizeof(arr1[0] - 2);*/
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		//if (password == "123456")//==���ܱȽ������ַ����Ƿ����Ӧ����һ���⺯��-strcmp
//		if (strcmp(password, "123456")==0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("�������붼�������˳�����\n");
//	return 0;
//}