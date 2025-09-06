#include <iostream>
#include <Windows.h>

enum class Months {
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

void FindMonths(int numOfMonth);

int main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице	
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода

	int numOfMonth;

	std::cout << "Введите номер месяца: ";
	std::cin >> numOfMonth;
	while (numOfMonth != 0)
	{
		FindMonths(numOfMonth);
		std::cout << "Введите номер месяца: ";
		std::cin >> numOfMonth;
	}
	std::cout << "До свидания!";


}

void FindMonths(int numOfMonth)
{
	Months month = static_cast<Months>(numOfMonth);
	switch (month)
	{
	case Months::January:
		std::cout << "Январь" << std::endl;
		break;
	case Months::February:
		std::cout << "Февраль" << std::endl;
		break;
	case Months::March:
		std::cout << "Март" << std::endl;
		break;
	case Months::April:
		std::cout << "Апрель" << std::endl;
		break;
	case Months::May:
		std::cout << "Май" << std::endl;
		break;
	case Months::June:
		std::cout << "Июнь" << std::endl;
		break;
	case Months::July:
		std::cout << "Июль" << std::endl;
		break;
	case Months::August:
		std::cout << "Август" << std::endl;
		break;
	case Months::September:
		std::cout << "Сентябрь" << std::endl;
		break;
	case Months::October:
		std::cout << "Октябрь" << std::endl;
		break;
	case Months::November:
		std::cout << "Ноябрь" << std::endl;
		break;
	case Months::December:
		std::cout << "Декабрь" << std::endl;
		break;
	default:
		std::cout << "Неправильный номер!" << std::endl;
		break;
	}
}