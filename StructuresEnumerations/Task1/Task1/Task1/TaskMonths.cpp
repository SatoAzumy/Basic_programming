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
	setlocale(LC_ALL, "rus"); // ��������� ������ �� ���������	
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����

	int numOfMonth;

	std::cout << "������� ����� ������: ";
	std::cin >> numOfMonth;
	while (numOfMonth != 0)
	{
		FindMonths(numOfMonth);
		std::cout << "������� ����� ������: ";
		std::cin >> numOfMonth;
	}
	std::cout << "�� ��������!";


}

void FindMonths(int numOfMonth)
{
	Months month = static_cast<Months>(numOfMonth);
	switch (month)
	{
	case Months::January:
		std::cout << "������" << std::endl;
		break;
	case Months::February:
		std::cout << "�������" << std::endl;
		break;
	case Months::March:
		std::cout << "����" << std::endl;
		break;
	case Months::April:
		std::cout << "������" << std::endl;
		break;
	case Months::May:
		std::cout << "���" << std::endl;
		break;
	case Months::June:
		std::cout << "����" << std::endl;
		break;
	case Months::July:
		std::cout << "����" << std::endl;
		break;
	case Months::August:
		std::cout << "������" << std::endl;
		break;
	case Months::September:
		std::cout << "��������" << std::endl;
		break;
	case Months::October:
		std::cout << "�������" << std::endl;
		break;
	case Months::November:
		std::cout << "������" << std::endl;
		break;
	case Months::December:
		std::cout << "�������" << std::endl;
		break;
	default:
		std::cout << "������������ �����!" << std::endl;
		break;
	}
}