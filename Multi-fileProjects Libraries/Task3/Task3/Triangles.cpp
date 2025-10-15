#include "Triangles.h"

Triangle::Triangle(int len_a, int len_b, int len_c, int angle_A, int angle_B, int angle_C) : Figure(3)
{
	a = len_a;
	b = len_b;
	c = len_c;
	A = angle_A;
	B = angle_B;
	C = angle_C;
}
std::string Triangle::getNameFigure()  { return "Треугольник "; };
void Triangle::getValueSide() { std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl; };
void Triangle::getValueAngle() { std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl; };
bool Triangle::checkFigure() {
	if (A + B + C == 180)
		return true;
	else
		return false;
}
void Triangle::print_info() {
	Figure::print_info();
	getValueSide();
	getValueAngle();
}

Right_angled_Triangle::Right_angled_Triangle(int len_a, int len_b, int len_c, int angle_A, int angle_B) : Triangle(len_a, len_b, len_c, angle_A, angle_B, 90)
{
	a = len_a;
	b = len_b;
	c = len_c;
	A = angle_A;
	B = angle_B;
	C = 90;
}
std::string Right_angled_Triangle::getNameFigure() { return "Прямоугольный треугольник: "; };
bool Right_angled_Triangle::checkFigure() {
	bool is_valid = (Triangle::checkFigure() && C == 90);
	return is_valid;
}

Isosceles_Triangle::Isosceles_Triangle(int len_a, int len_b, int angle_A, int angle_B) : Triangle(len_a, len_b, len_a, angle_A, angle_B, angle_A)
{
	a = len_a;
	b = len_b;
	c = len_a;
	A = angle_A;
	B = angle_B;
	C = angle_A;
}
std::string Isosceles_Triangle::getNameFigure() { return "Равнобедренный треугольник: "; };
bool Isosceles_Triangle::checkFigure() {
	bool is_valid = (Triangle::checkFigure() && a == c && A == C);
	return is_valid;
}

Equilateral_Triangle::Equilateral_Triangle(int len_a) : Triangle(len_a, len_a, len_a, 60, 60, 60)
{
	a = len_a;
	b = len_a;
	c = len_a;
	A = 60;
	B = 60;
	C = 60;
}
std::string Equilateral_Triangle::getNameFigure() { return "Равносторонний треугольник: "; };
bool Equilateral_Triangle::checkFigure() {
	bool is_valid = (Triangle::checkFigure() && a == c && b == c && A == 60 && B == 60 && C == 60);
	return is_valid;
}