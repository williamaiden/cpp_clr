// cpp_dll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "cpp_dll.h"
#include <stdio.h>

// 这是导出变量的一个示例
CPP_DLL_API int ncpp_dll=0;

// 这是导出函数的一个示例。
CPP_DLL_API int fncpp_dll(void)
{
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 cpp_dll.h
Ccpp_dll::Ccpp_dll()
{
	return;
}


void Ccpp_dll::show_dll(char* val){
	printf("hello, i'm dll : %s\n",val);
}
