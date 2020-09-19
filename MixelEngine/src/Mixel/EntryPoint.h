#pragma once


#ifdef MX_PLATFORM_WINDOWS

#include "Application.h"

extern Mixel::Application* Mixel::CreateApplication();

int main(int argc, char** argv)
{
	Mixel::Log::Init();
	MX_CORE_INFO("Initialized Logger!");
	
	
	auto app = Mixel::CreateApplication();
	app->Run();
	delete app;
}

#endif