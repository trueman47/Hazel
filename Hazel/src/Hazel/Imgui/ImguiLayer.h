#pragma once

#include "Hazel/Layer.h"

namespace Hazel {
	class HAZEL_API ImguiLayer : public Layer
	{
	public:
		ImguiLayer();
		~ImguiLayer();

		void Attach();
		void Detach();
		void OnUpdate();
		void OnEvent(Event& event);

	private:
		float m_Time = 0.0f;
	};
}