#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

#include "memory"

namespace Mixel
{
	class MIXEL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;


	};

}


//core log macros
#define MX_CORE_TRACE(...)	::Mixel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MX_CORE_INFO(...)	::Mixel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MX_CORE_WARN(...)	::Mixel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MX_CORE_ERROR(...)	::Mixel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MX_CORE_FATAL(...)	::Mixel::Log::GetCoreLogger()->critical(__VA_ARGS__)

//Client log macros
#define MX_TRACE(...)		::Mixel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MX_INFO(...)		::Mixel::Log::GetClientLogger()->info(__VA_ARGS__)
#define MX_WARN(...)		::Mixel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MX_ERROR(...)		::Mixel::Log::GetClientLogger()->error(__VA_ARGS__)
#define MX_FATAL(...)		::Mixel::Log::GetClientLogger()->critical(__VA_ARGS__)