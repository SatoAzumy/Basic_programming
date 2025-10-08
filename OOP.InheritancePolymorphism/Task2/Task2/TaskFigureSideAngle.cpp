#include <iostream>
#include <Windows.h>

class Figure
{
public:
	Figure(int length)
	{
		sideLength = length;
	}
	int getSideLength() { return sideLength; };
	std::string getNameFigure() { return "Фигура: "; };
private:
	int sideLength;
};
class Triangle : public Figure
{
public:
	Triangle (int len_a, int len_b, int len_c, int angle_A, int angle_B, int angle_C) : Figure (3)
	{
		a = len_a;
		b = len_b;
		c = len_c;
		A = angle_A;
		B = angle_B;
		C = angle_C;
	}
	std::string getNameFigure() { return "Треугольник "; };
	void getValueSide() { std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl; };
	void getValueAngle() { std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl; };
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
	std::string getNameFigure() { return "Прямоугольный треугольник: "; };
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
	Isosceles_Triangle(int len_a, int len_b,int angle_A, int angle_B) : Triangle(len_a, len_b, len_a, angle_A, angle_B, angle_A)
	{
		a = len_a;
		b = len_b;
		c = len_a;
		A = angle_A;
		B = angle_B;
		C = angle_A;
	}
	std::string getNameFigure() { return "Равнобедренный треугольник: "; };
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
	Equilateral_Triangle(int len_a) : Triangle(len_a, len_a, len_a, 60,60,60)
	{
		a = len_a;
		b = len_a;
		c = len_a;
		A = 60;
		B = 60;
		C = 60;
	}
	std::string getNameFigure() { return "Равносторонний треугольник: "; };
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
	std::string getNameFigure() { return "Четырехугольник: "; };
	void getValueSide() { std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl; };
	void getValueAngle() { std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl; };
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
	std::string getNameFigure() { return "Параллелограмм: "; };
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
	Rectangles(int len_a, int len_b) : Parallelogram (len_a, len_b, 90, 90)
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
	std::string getNameFigure() { return "Прямоугольник: "; };
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
	Rrhomb (int len_a, int angle_A, int angle_B) : Parallelogram(len_a, len_a, angle_A, angle_B)
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
	std::string getNameFigure() { return "Ромб: "; };
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
	std::string getNameFigure() { return "Квадрат: "; };
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
	
	Triangle triangles = Triangle(10,20,30,50,60,70);
	std::cout << triangles.getNameFigure() << std::endl;
	triangles.getValueSide();
	triangles.getValueAngle();
	std::cout << std::endl;

	Right_angled_Triangle right_angled_Triangles = Right_angled_Triangle(10, 20, 30, 50, 60);
	std::cout << right_angled_Triangles.getNameFigure() << std::endl;
	right_angled_Triangles.getValueSide();
	right_angled_Triangles.getValueAngle();
	std::cout << std::endl;

	Isosceles_Triangle  isosceles_Triangles = Isosceles_Triangle(10, 20, 50, 60);
	std::cout << isosceles_Triangles.getNameFigure() << std::endl;
	isosceles_Triangles.getValueSide();
	isosceles_Triangles.getValueAngle();
	std::cout << std::endl;

	Equilateral_Triangle equilateral_Triangles = Equilateral_Triangle(30);
	std::cout << equilateral_Triangles.getNameFigure() << std::endl;
	equilateral_Triangles.getValueSide();
	equilateral_Triangles.getValueAngle();
	std::cout << std::endl;

	Quadrilateral quadrilaterals = Quadrilateral(10,20,30,40,50,60,70,80);
	std::cout << quadrilaterals.getNameFigure() << std::endl;
	quadrilaterals.getValueSide();
	quadrilaterals.getValueAngle();
	std::cout << std::endl;

	Rectangles rectangles = Rectangles(10,20);
	std::cout << rectangles.getNameFigure() << std::endl;
	rectangles.getValueSide();
	rectangles.getValueAngle();
	std::cout << std::endl;

	Square squares = Square(20);
	std::cout << squares.getNameFigure() << std::endl;
	squares.getValueSide();
	squares.getValueAngle();
	std::cout << std::endl;

	Parallelogram parallelograms = Parallelogram(20, 30, 30, 40);
	std::cout << parallelograms.getNameFigure() << std::endl;
	parallelograms.getValueSide();
	parallelograms.getValueAngle();
	std::cout << std::endl;

	Rrhomb  rrhombs = Rrhomb(30, 30, 40);
	std::cout << rrhombs.getNameFigure() << std::endl;
	rrhombs.getValueSide();
	rrhombs.getValueAngle();

	return 0;
}
