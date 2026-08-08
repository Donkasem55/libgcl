#include <X11/Xlib.h>

int getscreen(Display* display) {
	int screen = DefaultScreen(display);
	return screen;
}

void createroot(Display* display, int screen, Window* window) {
	*window = RootWindow(display, screen);
	return;
}

void createwindow(Display* display, Window* parent, char* title, unsigned int w, unsigned int h, unsigned int borderwidth, unsigned long border, unsigned long background, Window* window) {
	*window = XCreateSimpleWindow(
		display,
		*parent,
		0,
		0,
		w,
		h,
		borderwidth
		border
		background
	);
	return;
}
