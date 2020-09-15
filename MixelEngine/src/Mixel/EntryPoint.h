#pragma once


#ifdef MX_PLATFORM_WINDOWS

#include "Application.h"

extern Mixel::Application* Mixel::CreateApplication();

int main(int argc, char** argv)
{	auto app = Mixel::CreateApplication();
	app->Run();
	delete app;
}

#endif