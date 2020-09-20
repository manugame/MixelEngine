#include "Mixel.h"

class ExampleLayer : public Mixel::Layer
{
public:
	ExampleLayer() : Layer("Example")
	{
		
	}

	void OnUpdate() override
	{
		MX_INFO("ExampleLayer::OnUpdate");
	}

	void OnEvent(Event& event) override
	{
		MX_TRACE("{0}", event);
	}
};

class Sandbox : public Mixel::Application
{
public:
	Sandbox()
	{
		Pushlayer(new ExampleLayer());
	
	}

	~Sandbox()
	{
	}

	
};

Mixel::Application* Mixel::CreateApplication()
{
	return new Sandbox();

}