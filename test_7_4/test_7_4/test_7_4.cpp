#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	;//�����-�����
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}//���������ô����
//	//else if (18<=age<28)//����
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");//����ʡ�Բ�Ӱ��
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
//	//else�ͽ���if ƥ��
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
//	}//�����Ÿ���
//	else
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)//��������Ƚϣ����ױ���bug
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
//}//100��������

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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
//	while ((ch = getchar()) !=EOF)//ctrl+z����
//	{
//		putchar(ch);
//	}
//	return 0;
//}