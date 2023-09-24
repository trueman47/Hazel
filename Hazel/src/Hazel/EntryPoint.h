#pragma once

#include <stdio.h>

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main()
{
	printf("Hazel Engine running...");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif