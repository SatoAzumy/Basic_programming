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
	Triangle() : Figure(3) {}
	std::string getNameFigure() { return "Треугольник: "; };
};
class Quadrilateral : public Figure
{
public:
	Quadrilateral() : Figure(4) {}
	std::string getNameFigure() { return "Четырехугольник: "; };
};
int main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	Figure figures = Figure(0);
	Triangle triangles = Triangle();
	Quadrilateral quadrilateral = Quadrilateral();
	std::cout << "Количество сторон: " << std::endl;
	std::cout << figures.getNameFigure() << figures.getSideLength() << std::endl;
	std::cout << triangles.getNameFigure() << triangles.getSideLength() << std::endl;
	std::cout << quadrilateral.getNameFigure() << quadrilateral.getSideLength() << std::endl;

	return 0;
}
