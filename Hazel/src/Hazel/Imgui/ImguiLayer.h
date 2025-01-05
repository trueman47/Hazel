#pragma once

#include "Hazel/Core/Layer.h"

#include "Hazel/Events/ApplicationEvent.h"
#include "Hazel/Events/KeyEvent.h"
#include "Hazel/Events/MouseEvent.h"

namespace Hazel {
	class HAZEL_API ImguiLayer : public Layer
	{
	public:
		ImguiLayer();
		~ImguiLayer();

		virtual void Attach() override;
		virtual void Detach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();


	private:
		float m_Time = 0.0f;
	};
}