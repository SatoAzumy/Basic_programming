#include <iostream>
#include <Windows.h>

class Figure
{
public:
	Figure(int length)
	{
		sideLength = length;
	}
	virtual void getSideLength() {std::cout << "Количество сторон: " << sideLength << std::endl;};
	virtual std::string getNameFigure() { return "Фигура: "; };
	virtual bool checkFigure() {
		if (sideLength == 0)
			return true;
		else
			return false;
	}
	virtual void print_info() {
		std::cout << getNameFigure() << std::endl;
		if (checkFigure())
			std::cout << "Правильная" << std::endl;
		else
			std::cout << "Неправильная" << std::endl;
		getSideLength();
	}
private:
	int sideLength;
};
class Triangle : public Figure
{
public:
	Triangle(int len_a, int len_b, int len_c, int angle_A, int angle_B, int angle_C) : Figure(3)
	{
		a = len_a;
		b = len_b;
		c = len_c;
		A = angle_A;
		B = angle_B;
		C = angle_C;
	}
	std::string getNameFigure() override { return "Треугольник "; };
	void getValueSide() { std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl; };
	void getValueAngle() { std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl; };
	bool checkFigure() override {
		if (A + B + C == 180)
			return true;
		else
			return false;
	}
	void print_info() override {
		Figure::print_info();
		getValueSide();
		getValueAngle();
	}
private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};
class Right_angled_Triangle : public Triangle
{
public:
	Right_angled_Triangle(int len_a, int len_b, int len_c, int angle_A, int angle_B) : Triangle(len_a, len_b, len_c, angle_A, angle_B, 90)
	{
		a = len_a;
		b = len_b;
		c = len_c;
		A = angle_A;
		B = angle_B;
		C = 90;
	}
	std::string getNameFigure() override { return "Прямоугольный треугольник: "; };
	bool checkFigure() override {
		bool is_valid = (Triangle::checkFigure() && C == 90);
		return is_valid;
	}
	
private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};

class Isosceles_Triangle : public Triangle
{
public:
	Isosceles_Triangle(int len_a, int len_b, int angle_A, int angle_B) : Triangle(len_a, len_b, len_a, angle_A, angle_B, angle_A)
	{
		a = len_a;
		b = len_b;
		c = len_a;
		A = angle_A;
		B = angle_B;
		C = angle_A;
	}
	std::string getNameFigure() override { return "Равнобедренный треугольник: "; };
	bool checkFigure() override {
		bool is_valid = (Triangle::checkFigure() && a == c && A == C);
		return is_valid;
	}

private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};

class Equilateral_Triangle : public Triangle
{
public:
	Equilateral_Triangle(int len_a) : Triangle(len_a, len_a, len_a, 60, 60, 60)
	{
		a = len_a;
		b = len_a;
		c = len_a;
		A = 60;
		B = 60;
		C = 60;
	}
	std::string getNameFigure() override { return "Равносторонний треугольник: "; };
	bool checkFigure() override {
		bool is_valid = (Triangle::checkFigure() && a == c && b == c && A == 60 && B == 60 && C == 60);
		return is_valid;
	}
	
private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};

class Quadrilateral : public Figure
{
public:
	Quadrilateral(int len_a, int len_b, int len_c, int len_d, int angle_A, int angle_B, int angle_C, int angle_D) : Figure(4)
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
	std::string getNameFigure() override { return "Четырехугольник: "; };
	void getValueSide() { std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl; };
	void getValueAngle() { std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl; };
	bool checkFigure() override {
		if (A + B + C + D == 360)
			return true;
		else
			return false;
	}
	void print_info() override {
		Figure::print_info();
		getValueSide();
		getValueAngle();
	}
private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};
class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(int len_a, int len_b, int angle_A, int angle_B) : Quadrilateral(len_a, len_b, len_a, len_b, angle_A, angle_B, angle_A, angle_B)
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
	std::string getNameFigure() override { return "Параллелограмм: "; };
	bool checkFigure() override {
		bool is_valid = (Quadrilateral::checkFigure() && a == c && b == d && A == C && B == D);
		return is_valid;
	}
	
private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};
class Rectangles : public Parallelogram
{
public:
	Rectangles(int len_a, int len_b) : Parallelogram(len_a, len_b, 90, 90)
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
	std::string getNameFigure() override { return "Прямоугольник: "; };
	bool checkFigure() override {
		bool is_valid = (Quadrilateral::checkFigure() && a == c && b == d && A == 90 && B == 90 && C ==90 && D == 90);
		return is_valid;
	}
	
private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};

class Rrhomb : public Parallelogram
{
public:
	Rrhomb(int len_a, int angle_A, int angle_B) : Parallelogram(len_a, len_a, angle_A, angle_B)
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
	std::string getNameFigure() override { return "Ромб: "; };
	bool checkFigure() override {
		bool is_valid = (Quadrilateral::checkFigure() && a == c && b == d && a == b && A == C && B == D);
		return is_valid;
	}
	
private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};

class Square : public Rectangles
{
public:
	Square(int len_a) : Rectangles(len_a, len_a)
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
	std::string getNameFigure() override { return "Квадрат: "; };
	bool checkFigure() override {
		bool is_valid = (Quadrilateral::checkFigure() && a == c && b == d  && a == b && A == 90 && B == 90 && C == 90 && D == 90);
		return is_valid;
	}
	
private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};

int main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице	
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода

	Figure figures = Figure(0);
	figures.print_info();
	std::cout << std::endl;

	Triangle triangles = Triangle(10, 20, 30, 50, 60, 70);
	triangles.print_info();
	std::cout << std::endl;

	Right_angled_Triangle right_angled_Triangles = Right_angled_Triangle(10, 20, 30, 50, 60);
	right_angled_Triangles.print_info();
	std::cout << std::endl;

	Right_angled_Triangle right_angled_Triangles2 = Right_angled_Triangle(10, 20, 30, 50, 40);
	right_angled_Triangles2.print_info();
	std::cout << std::endl;

	Isosceles_Triangle  isosceles_Triangles = Isosceles_Triangle(10, 20, 50, 60);
	isosceles_Triangles.print_info();
	std::cout << std::endl;

	Equilateral_Triangle equilateral_Triangles = Equilateral_Triangle(30);
	equilateral_Triangles.print_info();
	std::cout << std::endl;

	Quadrilateral quadrilaterals = Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	quadrilaterals.print_info();
	std::cout << std::endl;

	Rectangles rectangles = Rectangles(10, 20);
	rectangles.print_info();
	std::cout << std::endl;

	Square squares = Square(20);
	squares.print_info();
	std::cout << std::endl;

	Parallelogram parallelograms = Parallelogram(20, 30, 30, 40);
	parallelograms.print_info();
	std::cout << std::endl;

	Rrhomb  rrhombs = Rrhomb(30, 30, 40);
	rrhombs.print_info();

	return 0;
}
