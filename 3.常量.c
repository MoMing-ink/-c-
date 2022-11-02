#define _CRT_SECURE_NO_WARNINGS 1

//常量

#include  <stdio.h>

//int main()
//{
////1.字面常量
//	/*3.14;
//	"da";
//	'de';*/
//
////2.const修饰的常变量
//	//const int num = 10;
//	////num = 20;//若被const修饰，此时不可修改“num”变量
//	//printf("%d\n", num);
//
//	//const int n = 10;
//	//int arr[n] = { 0 };//arr指创建数组，[]中必须为常量，本质为变量的变量和常变量都不行
//
////3.  #define 定义的标识符常量
//#define MAX 9999
// 	//MAX = 10000;//define修饰的常量不可修改//error
//	/*int n = MAX;
//	printf("n = %d\n", n);
//
//     return 0;*/
//}

////4.枚举常量//可以一一列举的常量
//enum Sex//enum为枚举定义符
//{
//	//这种枚举类型的变量的未来可能取值
//  //枚举常量
//	MALE = 3,//赋初值可改，函数内不可改
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("% d\n", MALE);//0
//	printf("% d\n", FEMALE);//1
//	printf("% d\n", SECRET);//2
//	return 0;
//}
