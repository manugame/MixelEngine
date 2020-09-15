#pragma once

#include "Core.h"

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



