#include "Screen.h"

Screen& Screen::set(char ch) {
	contents[cursor] = ch;
	return *this;
}
Screen& Screen::set(index r, index c, char ch) {
	index rows = r*width;
	contents[rows + c] = ch;
	return *this;
}
Screen& Screen::move(index r, index c) {
	cursor = r *width + c;
	return *this;
}

Screen& Screen::display(std::ostream& stream) {
	do_display(stream);
	return *this;
}


const Screen& Screen::display(std::ostream& stream) const {
	do_display(stream);
	return *this;
}