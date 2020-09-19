#include "Mixel.h"

class Sandbox : public Mixel::Application
{
public:
	Sandbox()
	{
	
	}

	~Sandbox()
	{
	}

	
};

Mixel::Application* Mixel::CreateApplication()
{
	return new Sandbox();

}