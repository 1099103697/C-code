#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//描述学生一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键 Stu 结构体标签  struct Stu 结构体类型
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	Stu s1 = {"张三",20,"13123546489","男"};
//	Stu s2 = {"李四",18,"15649889797","女"};//s局部变量
//	return 0;
//}


//
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//
//};
//
//int main()
//{
//	char arr[] = "hello\n";
//	struct T t = { "heh", {100,"w","fluent",3.14}, arr };
//	printf("%s\n", t.ch);
//	printf("%d\n", t.s.a);
//	printf("%lf\n", t.s.d);
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[16];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu *ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "张三", 40, "155555568947","男" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

