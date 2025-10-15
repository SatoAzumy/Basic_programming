#include <iostream>
#include <Windows.h>

#include "CounterClass.h"

int main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице	
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода


	std::string command;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> command;
	while (command != "да" && command != "нет") {
		std::cout << "Запрос некорректный. Попробуйте еще раз!" << std::endl;
		std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
		std::cin >> command;
	}

	int count;
	if (command == "да")
	{
		std::cout << "Введите начальное значение счётчика:";
		std::cin >> count;
	}
	else
	{
		count = 1;
	}
	Counter newCounter(count);

	while (command != "x")
	{
		std::cout << "Введите команду('+', '-', '=' или 'x') :";
		std::cin >> command;
		while (command != "+" && command != "-" && command != "=" && command != "x") {
			std::cout << "Запрос некорректный. Попробуйте еще раз!" << std::endl;
			std::cout << "Введите команду('+', '-', '=' или 'x') :";
			std::cin >> command;
		}
		if (command == "+")
		{
			newCounter.increaseValue();
		}
		if (command == "-")
		{
			newCounter.decreaseValue();
		}
		if (command == "=")
		{
			std::cout << newCounter.currentValue() << std::endl;
		}
	}
	std::cout << "Досвидания!";


}
