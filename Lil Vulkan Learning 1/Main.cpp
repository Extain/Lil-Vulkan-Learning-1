#include <iostream>
#include "LilVulkan.h"
#include <iostream>
#include <stdexcept>

int main() {

	LilVulkan app;

	try {
		app.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}
