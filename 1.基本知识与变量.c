#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()//main为函数名；int（函数的返回类型）是整形的意思
//{
//	printf("比特\n");//printf-库函数-在屏幕上打印信息//需要“打招呼”（引用头文件stdio.h）\\"\n"为换行
//	return  0;//此为函数体
//}

//编译+链接+运行代码 快捷键：ctrl+f5
//1.一个工程中可以有多个c文件2.但是多个.c文件只能有一个main函数
//char  字符数据类型
//short    短整型
//int     整形
//long  长整形
// long long更长的整形
//float   单精度浮点数
//double     双精度浮点数
//a   'a'-字符a

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整形
//	int age = 20;
//	//短整型
//	short int num = 10;
//	//long （long）
//	
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}

//int main()
//{
//	printf("yahalo\n");
//	printf("%d\n", 100);//打印一个整数-%d
//	printf("%d\n", sizeof(char));//sizeof-关键字-操作符-计算类型/变量所占空间的大小
//	printf("%d\n", sizeof(int));//sizeof算的数字单位为字节byte
//	printf("%d\n", sizeof(long));//C语言标准：sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(short));
//
//	return 0;
//} 

//计算机中单位：bit-比特
//              byte-字节=8bit
//              kb=1024byte
//              mb=1024kb
//              gb=1024mb
//              tb=1024gb
//              pb=1024tb

//int main()
//{
//	//创建的一个变量
//	//类型  变量的名字=0
//	//类型  变量的名字；//不推荐
//	int age = 20;
//	double weight = 75.3;
//	  
//	age = age + 1;
//	printf("%d\n", age);
//	weight = weight - 10;
//	printf("%lf\n", weight);
//	return 0;
//}

//%d-整形
//%f-float
//%lf- double

//int a = 100;//<--全局变量（在{}外的）
//int main()
//{
//	int a = 10;//<--局部变量（在{}内的）
//	//当局部变量和全局变量名字冲突的情况下，局部有效
//	//不建议把全局变量和局部变量名字写成一样的
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);//scanf为输入函数
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}

