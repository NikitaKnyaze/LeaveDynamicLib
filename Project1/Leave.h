#pragma once


#ifndef PROJECT1_EXPORTS
#define PROJECT1_API __declspec(dllexport)
#else
#define PROJECT1_API __declspec(dllimport)
#endif

#include <iostream>

namespace NewLeav {
	class Leaver
	{
	public:
		PROJECT1_API std::string leave(std::string);
	};
}