// 这是主 DLL 文件。

#include "stdafx.h"
#include "csharp_clr.h"
#include "../cpp_dll/cpp_dll.h"
//E:\Code\VS2013\csharp_clr\Debug
//E:\Code\VS2013\csharp_clr\csharp_clr\csharp_clr.cpp
#pragma comment(lib,"../Debug/cpp_dll.lib")

using namespace csharp_clr;
using namespace System::Runtime::InteropServices;

void MyClr::showInt(int val){
	printf("this int value is :%d\n", val);
}

int MyClr::showString(String^ s){
	char* p = (char*)Marshal::StringToHGlobalAnsi(s).ToPointer();
	//printf("lalala,you are: %s\n",p);
	Ccpp_dll dll;
	dll.show_dll(p);
	return 1;
}
