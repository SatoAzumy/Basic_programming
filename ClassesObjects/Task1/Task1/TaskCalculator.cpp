#include <iostream>
#include <Windows.h>

class Calculator
{
private:
	double num1;
	double num2;
public:
	double add()
	{
		return num1 + num2;
	}
	double subtract_1_2()
	{
		return num1 - num2;
	}
	double subtract_2_1()
	{
		return num2 - num1;
	}
	double multiply()
	{
		return num1 * num2;
	}
	double divide_1_2()
	{
		return num1 / num2;
	}
	double divide_2_1()
	{
		return num2 / num1;
	}
	bool set_num1(double num1)
	{
		if (num1 != 0)
		{
			this->num1 = num1;
			return true;
		}
		else
		{
			std::cout << "Неверный ввод!" << std::endl;
			return false;
		}
		
	}
	bool set_num2(double num2)
	{
		if (num2 != 0)
		{
			this->num2 = num2;
			return true;
		}
		else
		{
			std::cout << "Неверный ввод!" << std::endl;
			return false;
		}

	}
};

int main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице	
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода

	double num1;
	double num2;
	
	Calculator newCalculator;

	while (true)
	{
		bool flag = false;
		while (!flag)
		{
			std::cout << "Введите num1: ";
			std::cin >> num1; 
			flag=newCalculator.set_num1(num1);
		}
		flag = false;
		while (!flag)
		{
			std::cout << "Введите num2: ";
			std::cin >> num2;
			flag=newCalculator.set_num2(num2);
		}
		std::cout << "num1 + num2 = " << newCalculator.add() << std::endl;
		std::cout << "num1 - num2 = " << newCalculator.subtract_1_2() << std::endl;
		std::cout << "num2 - num1 = " << newCalculator.subtract_2_1() << std::endl;
		std::cout << "num1 * num2 = " << newCalculator.multiply() << std::endl;
		std::cout << "num1 / num2 = " << newCalculator.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << newCalculator.divide_2_1() << std::endl;
		
	}
}
