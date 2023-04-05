#ifndef WINDOW_H
#define WINDOW_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <iostream>


struct WindowParam
{
	uint32_t width;
	uint32_t height;
	const char* title;
};

class Window
{
public:
	void createWindow(WindowParam param);
	bool shouldClose();
	void poll();
	~Window();

private:
	GLFWwindow* m_window;
};

#endif

