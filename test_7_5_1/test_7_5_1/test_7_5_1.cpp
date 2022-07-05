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
//	//初始化  判断   调整
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
//}//死循环

//int main()
//{
//	int i = 0;
//	int k = 0;
//	//              k赋值0，为假，不进循环
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
//}//阶乘

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
//}//阶乘累加

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
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//		if (i == sz)
//			printf("找不到\n");
//	
//	return 0;
//}//找数


//int main()
//{
//	int k = 7;
//	int arr[] = { 1, 2, 3, 4, 5, 6,7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
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
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}//折半查找算法



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
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
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
//		printf("请输入密码：>");
//		scanf("%s", password);
//		//if (password == "123456")//==不能比较两个字符串是否相等应该用一个库函数-strcmp
//		if (strcmp(password, "123456")==0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码都错误，请退出程序\n");
//	return 0;
//}