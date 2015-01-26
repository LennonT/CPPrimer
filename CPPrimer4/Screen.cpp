#include "Screen.h"

using std::string;

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
	//try {
	//	cursor = r *width + c;
	//}
	//catch (std::runtime_error* e) {
	//	throw *e;
	//	std::cout << e->what() << std::endl;
	//}

	if (r>=height || c>= width) {
		std::cerr << "out of range." << std::endl;
		throw EXIT_FAILURE;
	}

	cursor = r * width + c;

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

void Screen::do_display(std::ostream& os) const{
	++access_ctr;
	string::size_type counter = 0;
	for (string::const_iterator ite = contents.begin(); ite != contents.end(); ++ite) {
		os << *ite;
		if (++counter % width == 0) {
			os << '\n';
			counter = 0;
		}
	}
}