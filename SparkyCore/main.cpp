#include <GLFW\glfw3.h>
#include<iostream>

#include "src/graphics/Window.h"
using namespace std;
int main() {
	
	using namespace sparky;
	using namespace graphics;

	Window window("Sparky!", 960, 540);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	while (!window.closed()) {
		cout << window.getHeight() << "," << window.getWidth() << endl;

		window.clear();
		window.update();
	}
	/*system("PAUSE");*/
	return 0;
}