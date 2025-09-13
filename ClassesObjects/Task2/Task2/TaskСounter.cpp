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
	setlocale(LC_ALL, "rus"); // ��������� ������ �� ���������	
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����

	Counter newCounter;
	int count;
	std::string command;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> command;
	while (command != "��" && command != "���") {
		std::cout << "������ ������������. ���������� ��� ���!" << std::endl;
		std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
		std::cin >> command;
	}
	if (command == "��")
	{
		std::cout << "������� ��������� �������� ��������:";
		std::cin >> count;
		newCounter.SetCount(count);
	}

	while (command != "x")
	{
		std::cout << "������� �������('+', '-', '=' ��� 'x') :";
		std::cin >> command;
		while (command != "+" && command != "-" && command != "=" && command != "x") {
			std::cout << "������ ������������. ���������� ��� ���!" << std::endl;
			std::cout << "������� �������('+', '-', '=' ��� 'x') :";
			std::cin >> command;
		}
		if (command != "x") { newCounter.Calculate(command); }
	}
	std::cout << "����������!";
}