// csharp_clr.h

#pragma once

#include <stdio.h>

using namespace System;


namespace csharp_clr {

	public ref class MyClr
	{
	public:
		void showInt(int val);
		int showString(String^ s);
	};
}
