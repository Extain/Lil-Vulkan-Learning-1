#include "LilVulkan.h"


void LilVulkan::run() {
	initWindow();
	initVulkan();
	mainLoop();
	cleanup();
}

void LilVulkan::initWindow() {
	WindowParam wParam {
		800,
		600,
		"Lil Vulkan"
	};

	window = new Window();

	window->createWindow(wParam);
}

void LilVulkan::initVulkan() {

}

void LilVulkan::mainLoop() {

	while (!window->shouldClose())
	{
		window->poll();
	}

}

void LilVulkan::cleanup() {
	delete window;
}