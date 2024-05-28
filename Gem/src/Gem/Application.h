#pragma once
#include "Core.h"
#include "Gem/Events/Event.h"

namespace Gem
{
	class GEM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// 在客户端中定义
	Application* CreateApplication();
}