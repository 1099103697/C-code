#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	;//是语句-空语句
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}//多条语句采用代码块
//	//else if (18<=age<28)//错误
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老不死\n");//可以省略不影响
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a==1)
//	  if (b == 2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	//else就近跟if 匹配
//
//		
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}//加括号隔开
//	else
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)//常量放左比较，容易避免bug
//		printf("heh\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		printf(" %d", i);
//		i += 2;
//
//	}
//	//while (i < 100)
//	//{
//	//	if (i % 2 == 1)
//	//		printf(" %d", i);
//	//	i++;
//
//	//}
//	return 0;
//}//100以内奇数

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:	
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//
//	}
//	return 0;
//}



//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) !=EOF)//ctrl+z结束
//	{
//		putchar(ch);
//	}
//	return 0;
//}