#ifndef VULKAN_H
#define VULKAN_H

#include <vulkan/vulkan.h>
#include <GLFW/glfw3.h>
#include <stdexcept>
#include <iostream>

class Vulkan
{
public:
	void createInstance();
	void checkExtensions();

	~Vulkan();

private:
	VkInstance instance;
};

#endif;

