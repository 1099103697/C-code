#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n/= 10;
//	}
//	return 0;
//}//数字，反向输出

//字母大小写转换
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())  != EOF)
//	{
//		
//		printf("%c\n", ch+32);
//		getchar();
//
//	//处理多余的\n字符
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number = 0;
//	float score_c = 0.0;
//	float score_math = 0.0;
//	float score_eng = 0.0;
//	scanf("%d;%f,%f,%f", &number, &score_c, &score_math, &score_eng);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", \
//		number, score_c, score_math, score_eng);
//	return 0;
//}

//判断字符是否为字母
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
//			printf("Yes\n");
//		else
//			printf("No\n");
//		getchar();
//	}
//	return 0;
//}


//金字塔

//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//
//		int j = 0;
//		for (j = 0; j < 5 - i - 1; j++)
//		{
//			printf(" ");
//		}
//			for (j = 0; j <= i; j++)
//			{
//				printf("%c ", ch);
//			}
//			printf("\n");
//		}
//	return 0;
//
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//
//}
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("输入密码:>");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认(Y/N):>");
	ret = getchar();
	if (ret =='Y')
	{
		printf("确认成功\n");

	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}
