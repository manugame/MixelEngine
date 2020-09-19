#include "Application.h"

#include <iostream>

#include "Log.h"
#include "Mixel/Events/ApplicationEvent.h"



namespace Mixel
{
	
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{

		WindowResizeEvent event(1280, 720);
		MX_TRACE(event);
		
		while (true);
	}


}
