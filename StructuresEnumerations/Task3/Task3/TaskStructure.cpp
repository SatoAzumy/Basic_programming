#include <iostream>
#include <Windows.h>

struct Addres
{
	std::string city;
	std::string street;
	int numHouse;
	int numFlat;
	int index;

	void PrintAddres(struct Addres newAddres)
	{
		std::cout << "�����: " << newAddres.city << std::endl;
		std::cout << "�����: " << newAddres.street << std::endl;
		std::cout << "����� ����: " << newAddres.numHouse << std::endl;
		std::cout << "����� ��������: " << newAddres.numFlat << std::endl;
		std::cout << "������: " << newAddres.index << std::endl;
	}

};


int main()
{
	setlocale(LC_ALL, "rus"); // ��������� ������ �� ���������	
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����

	Addres newAddres1 = { "������", "�����",12,8,123456 };
	newAddres1.PrintAddres(newAddres1);
	std::cout << std::endl;
	Addres newAddres2 = { "������", "�������",59,143,953769 };
	newAddres1.PrintAddres(newAddres2);
}
