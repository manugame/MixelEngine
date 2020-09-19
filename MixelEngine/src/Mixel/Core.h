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


#ifdef MX_ENABLE_ASSERTS
	 MX_ASSERT(x, ...) {if (!(x)) {MX_ERROR("Assertion failed: {}", __VA_ARGS__); __debugbreak(); } }
	#define MX_CORE_ASSERT(x, ...) {if (!(x)) {MX_CORE_ERROR("Assertion failed: {}", __VA_ARGS__); __debugbreak(); } }
#else
	#define MX_ASSERT(x, ...)
	#define MX_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)