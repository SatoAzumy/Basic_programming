#include "Figures.h"
#include "Triangles.h"
#include "Quadrilaterals.h"

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
