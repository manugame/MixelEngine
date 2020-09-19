#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

namespace Mixel
{
	
	class MIXEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& event);
	private:
		bool OnWindowClosed(WindowCloseEvent& e);
		
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};
	

	
	Application* CreateApplication();

}



