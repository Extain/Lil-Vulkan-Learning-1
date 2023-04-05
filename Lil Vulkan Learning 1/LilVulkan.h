#ifndef LILVULKAN_H
#define LILVULKAN_H

#include "Window.h"
#include "Vulkan.h"

class LilVulkan
{
public:
	void run();

private:
	void initWindow();
	void initVulkan();
	void mainLoop();
	void cleanup();

private:
	Window* window;
	Vulkan* vulkan;
};

#endif

