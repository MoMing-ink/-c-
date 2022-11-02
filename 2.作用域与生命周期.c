#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>

////作用域
//int vfw = 2022;//全局变量的作用域：整个工程（同一文件夹
//
////int main()
////{
////    
////	printf("%d\n", vfw);
////	{
////		printf("%d\n", vfw);
////		int a = 10;//局部变量的作用域：就是局部变量所在的局部范围
////		printf(" a = %d\n", a);
////	}
////	
////	
////	return 0;
////}
//
////使用其他同一项目下的文件中所定义的全局变量时，需声明
////extern int wad;//(该变量在“try1”）
////int main()
////{
////	printf("%d\n", wad);
////	return 0;
////}

////生命周期
////变量的生命周期：变量的创建和销毁之间的时间段
////
////全局变量的生命周期就是程序的生命周期  eg:main()
//int main()
//{
//	{
//		int a = 10;//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//        printf("%d\n", a);
//	}
//	return 0;
//}

