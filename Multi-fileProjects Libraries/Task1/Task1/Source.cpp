#include <iostream>
#include <Windows.h>
#include "Calculator.h"

int main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице	
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода

	int a, b, c;

	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> c;
	
	switch (c)
	{
	case 1: 
		std::cout << a << " + " << b << " = " << add(a, b);
		break;
	case 2:
		std::cout << a << " - " << b << " = " << sub(a, b);
		break;
	case 3:
		std::cout << a << " * " << b << " = " << mul(a, b);
		break;
	case 4:
		std::cout << a << " / " << b << " = " << divis(a, b);
		break;
	case 5:
		std::cout << a << " в степени " << b << " = " << expon(a, b);
		break;

	default:
		std::cout << "Некорректно выбрана операция";
		break;
	}
}

 

