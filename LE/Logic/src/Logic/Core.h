#pragma once

#ifdef LE_PLATFORM_WINDOWS
	#ifdef LE_BUILD_DLL
		#define LOGIC_API __declspec(dllexport)
	#else
		#define LOGIC_API __declspec(dllimport)
	#endif
#else
	#error Logic Engine only supports Windows.
#endif