#pragma once
#include "mxpch.h"

#include "Mixel/Core.h"
#include "Mixel/Events/Event.h"

namespace Mixel
{
	struct WindowProps
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProps(const std::string& title = "MixelEngine",
			unsigned int width = 1280,
			unsigned int height = 720) : Title(title), Width(width), Height(height)
		{
			
		}
	};

	class MIXEL_API Window
	{
	public:
		using EventCallbackFn = std::function<void(Event&)>;

		virtual ~Window() {};

		virtual void OnUpdate() = 0;

		virtual unsigned int getWidth() const = 0;
		virtual unsigned int getHeight() const = 0;

		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
		virtual void SetVSync(bool enabled) = 0;
		virtual bool IsVSync() const = 0;

		static Window* Create(const WindowProps& props = WindowProps());

	};
}
