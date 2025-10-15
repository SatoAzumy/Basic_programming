#include "Quadrilaterals.h"

Quadrilateral::Quadrilateral(int len_a, int len_b, int len_c, int len_d, int angle_A, int angle_B, int angle_C, int angle_D) : Figure(4)
{
	a = len_a;
	b = len_b;
	c = len_c;
	d = len_d;
	A = angle_A;
	B = angle_B;
	C = angle_C;
	D = angle_D;
}
std::string Quadrilateral::getNameFigure()  { return "Четырехугольник: "; };
void Quadrilateral::getValueSide() { std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl; };
void Quadrilateral::getValueAngle() { std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl; };
bool Quadrilateral::checkFigure() {
	if (A + B + C + D == 360)
		return true;
	else
		return false;
}
void Quadrilateral::print_info() {
	Figure::print_info();
	getValueSide();
	getValueAngle();
}

Parallelogram::Parallelogram(int len_a, int len_b, int angle_A, int angle_B) : Quadrilateral(len_a, len_b, len_a, len_b, angle_A, angle_B, angle_A, angle_B)
{
	a = len_a;
	b = len_b;
	c = len_a;
	d = len_b;
	A = angle_A;
	B = angle_B;
	C = angle_A;
	D = angle_B;
}
std::string Parallelogram::getNameFigure() { return "Параллелограмм: "; };
bool Parallelogram::checkFigure() {
	bool is_valid = (Quadrilateral::checkFigure() && a == c && b == d && A == C && B == D);
	return is_valid;
}

Rectangles::Rectangles(int len_a, int len_b) : Parallelogram(len_a, len_b, 90, 90)
{
	a = len_a;
	b = len_b;
	c = len_a;
	d = len_b;
	A = 90;
	B = 90;
	C = 90;
	D = 90;
}
std::string Rectangles::getNameFigure() { return "Прямоугольник: "; };
bool Rectangles::checkFigure() {
	bool is_valid = (Quadrilateral::checkFigure() && a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90);
	return is_valid;
}

Square::Square(int len_a) : Rectangles(len_a, len_a)
{
	a = len_a;
	b = len_a;
	c = len_a;
	d = len_a;
	A = 90;
	B = 90;
	C = 90;
	D = 90;
}
std::string Square::getNameFigure() { return "Квадрат: "; };
bool Square::checkFigure() {
	bool is_valid = (Quadrilateral::checkFigure() && a == c && b == d && a == b && A == 90 && B == 90 && C == 90 && D == 90);
	return is_valid;
}

Rrhomb::Rrhomb(int len_a, int angle_A, int angle_B) : Parallelogram(len_a, len_a, angle_A, angle_B)
{
	a = len_a;
	b = len_a;
	c = len_a;
	d = len_a;
	A = angle_A;
	B = angle_B;
	C = angle_A;
	D = angle_B;
}
std::string Rrhomb::getNameFigure() { return "Ромб: "; };
bool Rrhomb::checkFigure() {
	bool is_valid = (Quadrilateral::checkFigure() && a == c && b == d && a == b && A == C && B == D);
	return is_valid;
}