#include <iostream>
#include <Windows.h>

class Counter
{
private:
	int count = 1;

public:
	void Calculate(std::string command)
	{
		if (command == "+") { this->count++; }
		if (command == "-") { this->count--; }
		if (command == "=") { std::cout << this->count << std::endl; }
	}
	void SetCount(int count)
	{
		this->count = count;
	}
	int GetCount()
	{
		return this->count;
	}
};

int main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице	
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода

	Counter newCounter;
	int count;
	std::string command;
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> command;
	while (command != "да" && command != "нет") {
		std::cout << "Запрос некорректный. Попробуйте еще раз!" << std::endl;
		std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
		std::cin >> command;
	}
	if (command == "да")
	{
		std::cout << "Введите начальное значение счётчика:";
		std::cin >> count;
		newCounter.SetCount(count);
	}

	while (command != "x")
	{
		std::cout << "Введите команду('+', '-', '=' или 'x') :";
		std::cin >> command;
		while (command != "+" && command != "-" && command != "=" && command != "x") {
			std::cout << "Запрос некорректный. Попробуйте еще раз!" << std::endl;
			std::cout << "Введите команду('+', '-', '=' или 'x') :";
			std::cin >> command;
		}
		if (command != "x") { newCounter.Calculate(command); }
	}
	std::cout << "Досвидания!";
}