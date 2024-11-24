#pragma once

#include "Core.h"

namespace Logic {

	class LOGIC_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

}