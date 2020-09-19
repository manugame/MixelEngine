#include "mxpch.h"

#include "Application.h"
#include <iostream>
#include <GLFW/glfw3.h>

#include "Log.h"
#include "Mixel/Events/ApplicationEvent.h"



namespace Mixel
{
	
	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create( {"MixelEngine window"} ));
	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		
		while (m_Running)
		{
			m_Window->OnUpdate();
		}
	}


}
