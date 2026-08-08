#include <X11/Xlib.h>

void gclinit(Display** display) {
	(*display) = XOpenDisplay(nullptr);
	return;
}

int getscreen(Display* display);
void createroot(Display* display, int screen);
void createwindow(Display* display, char* title, unsigned int w, unsigned int h, unsigned int borderwidth, unsigned long border, unsigned long background, Window* window);
