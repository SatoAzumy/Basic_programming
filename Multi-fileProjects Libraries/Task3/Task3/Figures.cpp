#include "Figures.h"

Figure::Figure(int length)
{
	sideLength = length;
}
void Figure::getSideLength() { std::cout << "Количество сторон: " << sideLength << std::endl; };
std::string Figure::getNameFigure() { return "Фигура: "; };
bool Figure::checkFigure() {
	if (sideLength == 0)
		return true;
	else
		return false;
}
void Figure::print_info() {
	std::cout << getNameFigure() << std::endl;
	if (checkFigure())
		std::cout << "Правильная" << std::endl;
	else
		std::cout << "Неправильная" << std::endl;
	getSideLength();
}