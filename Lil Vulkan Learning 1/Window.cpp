#include "Window.h"

void Window::createWindow(WindowParam params)
{
	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	m_window = glfwCreateWindow(params.width, params.height, params.title, nullptr, nullptr);
}

bool Window::shouldClose()
{
	return glfwWindowShouldClose(m_window);
}

void Window::poll()
{
	glfwPollEvents();
}

Window::~Window() 
{
	std::cout << "Destroying Window\n" << std::endl;
	glfwDestroyWindow(m_window);
	glfwTerminate();
}