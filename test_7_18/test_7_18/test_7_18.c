#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

////一个数里二进制1的个数
////int count_bit_one(unsigned int n)
////{
////	int count = 0;
////	while (n)
////	{
////		if (n % 2 == 1)
////			count++;
////		n = n / 2;
////	}
////	return count;
////}
//
//
////int count_bit_one(int n)
////{
////	int count = 0;
////	int i = 0;
////	for (i < 0; i < 32; i++)
////	{
////		if (((n >> i) & 1) == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
//
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数a的二进制（补码）表示中有几个1
//	int count=count_bit_one(a);
//
//
//	printf("count=%d\n", count);
//	//system("pause");//system库函数-执行系统命令-pause（暂停）
//	return 0;
//
//}

//int get_diff_bit(int m, int n)
//{
//	int count = 0;
//	int tmp = m^n;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m,&n);
//	int count = get_diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}

//打印一个数二进制中奇数位偶数位
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//void print_table(int n)
//{
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//#include<string.h>
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right =strlen(arr)-1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	
//	return 0;
//}


//写一个递归DigitSum（n），输入一个非负整数，返回组成它的数字之和
//例如输入1729，则应返回1+7+2+9，它的和是19


//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}


double Pow(int n, int k)
{
	if (k < 0)
		return(1.0 / (Pow(n, -k)));
	else if (k==0)
		return 1;
	else
		return n*Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n,k);
	printf("ret=%lf\n", ret);
	return 0;
}