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
//}//���֣��������

//��ĸ��Сдת��
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())  != EOF)
//	{
//		
//		printf("%c\n", ch+32);
//		getchar();
//
//	//��������\n�ַ�
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

//�ж��ַ��Ƿ�Ϊ��ĸ
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


//������

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
	printf("��������:>");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ��(Y/N):>");
	ret = getchar();
	if (ret =='Y')
	{
		printf("ȷ�ϳɹ�\n");

	}
	else
	{
		printf("����ȷ��\n");
	}
	return 0;
}
