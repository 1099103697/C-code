#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
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

//求Sn=a+aa+aaa+aaaa+aaaaa
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("sum= %d\n", sum);
//	return 0;
//}

//0-100中9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) 
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//
////找最大值
//int main()
//{
//	int arr[] = { 1, -2, 3, -4,- 5,- 6, -8 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}



//九九乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数字游戏
//1.电脑生成一个随机数
//2.猜数字

//#include<stdlib.h>
//#include<time.h>
//
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;//接收猜的数字
//	ret = rand()%100+1;//生成1-100的随机数
//	//printf("%d\n",ret)
//	while (1)
//	{
//		printf("猜数字>：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//
//void menu()
//{
//	printf("*************************\n");
//	printf("*******  1.play *********\n");
//	printf("******   0.exit *********\n");
//	printf("*************************\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//			switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//			default:
//				printf("选择错误,重新选择\n");
//				break;
//		}
//
//	} while (input);
//	return 0;
//
//}

//关机程序
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//关机60s
//again:
//	printf("电脑一分钟后关机，输入：我是猪，取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");//取消关机
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//
//}