#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Mixel
{
	
	class MIXEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	
	Application* CreateApplication();

}



