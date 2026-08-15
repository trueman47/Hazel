#include <Hazel.h>
#include <Hazel/Core/EntryPoint.h>

#include "EditorLayer.h"

namespace Hazel {
	class HazelEditorApp : public Hazel::Application
	{
	public:
		HazelEditorApp()
		{
			//PushLayer(new ExampleLayer());
			//PushLayer(new GameLayer());
			PushLayer(new EditorLayer());
		}

		~HazelEditorApp()
		{
		}
	};

	Hazel::Application* Hazel::CreateApplication()
	{
		return new HazelEditorApp();
	}
}