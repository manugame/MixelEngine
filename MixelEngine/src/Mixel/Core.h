#pragma once

#ifdef MX_PLATFORM_WINDOWS
	#ifdef MX_BUILD_DLL

		#define MIXEL_API __declspec(dllexport)
	#else
		#define MIXEL_API __declspec(dllimport)

	#endif

#else
#error Mixel only support windows!

#endif