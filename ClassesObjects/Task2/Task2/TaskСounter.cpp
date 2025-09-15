#include <iostream>
#include <Windows.h>

class Counter
{
private:
	int count;

public:
	Counter(int count)
	{
		this->count = count;
	}
	void currentValue()
	{ 
		std::cout << this->count << std::endl; 
	}
	void increaseValue()
	{
		this->count++;
	}
	void decreaseValue()
	{
		this->count--;
	}
};

int main()
{
	setlocale(LC_ALL, "rus"); // ��������� ������ �� ���������	
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����

	
	std::string command;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> command;
	while (command != "��" && command != "���") {
		std::cout << "������ ������������. ���������� ��� ���!" << std::endl;
		std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
		std::cin >> command;
	}

	int count;
	if (command == "��")
	{
		std::cout << "������� ��������� �������� ��������:";
		std::cin >> count;
	}
	else
	{
		count = 1;
	}
	Counter newCounter(count);

	while (command != "x")
	{
		std::cout << "������� �������('+', '-', '=' ��� 'x') :";
		std::cin >> command;
		while (command != "+" && command != "-" && command != "=" && command != "x") {
			std::cout << "������ ������������. ���������� ��� ���!" << std::endl;
			std::cout << "������� �������('+', '-', '=' ��� 'x') :";
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
			newCounter.currentValue();
		}
	}
	std::cout << "����������!";
		
	
}
