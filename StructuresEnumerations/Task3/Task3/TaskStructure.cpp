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
		std::cout << "Город: " << newAddres.city << std::endl;
		std::cout << "Улица: " << newAddres.street << std::endl;
		std::cout << "Номер дома: " << newAddres.numHouse << std::endl;
		std::cout << "Номер квартиры: " << newAddres.numFlat << std::endl;
		std::cout << "Индекс: " << newAddres.index << std::endl;
	}

};


int main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице	
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода

	Addres newAddres1 = { "Москва", "Арбат",12,8,123456 };
	newAddres1.PrintAddres(newAddres1);
	std::cout << std::endl;
	Addres newAddres2 = { "Ижевск", "Пушкина",59,143,953769 };
	newAddres1.PrintAddres(newAddres2);
}
