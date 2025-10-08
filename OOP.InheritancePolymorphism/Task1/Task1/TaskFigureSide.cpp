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
	std::string getNameFigure() { return "������: "; };
private:
	int sideLength;

};
class Triangle : public Figure
{
public:
	Triangle() : Figure(3) {}
	std::string getNameFigure() { return "�����������: "; };
};
class Quadrilateral : public Figure
{
public:
	Quadrilateral() : Figure(4) {}
	std::string getNameFigure() { return "���������������: "; };
};
int main()
{
	setlocale(LC_ALL, "rus"); // ��������� ������ �� ���������
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	Figure figures = Figure(0);
	Triangle triangles = Triangle();
	Quadrilateral quadrilateral = Quadrilateral();
	std::cout << "���������� ������: " << std::endl;
	std::cout << figures.getNameFigure() << figures.getSideLength() << std::endl;
	std::cout << triangles.getNameFigure() << triangles.getSideLength() << std::endl;
	std::cout << quadrilateral.getNameFigure() << quadrilateral.getSideLength() << std::endl;

	return 0;
}
