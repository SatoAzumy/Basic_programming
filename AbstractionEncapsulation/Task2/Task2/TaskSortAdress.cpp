#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

class Address
{
public:
	Address() {};
	Address(std::string city, std::string street, std::string house, std::string flat) : city(std::move(city)), street(std::move(street)), house(std::move(house)), flat(std::move(flat)) {};
	std::string getAddress() { return city + ", " + street + ", " + house + ", " + flat; };
	std::string getCity() { return city; };
private:
	std::string city;
	std::string street;
	std::string house;
	std::string flat;
};
void main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице	
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода

	int numberAdress;
	std::string s;
	std::string city;
	std::string city2;
	std::string street;
	std::string house;
	std::string flat;
	std::ifstream fin("in.txt");

	if (fin.is_open())
	{
		if ((fin >> s))
		{
			numberAdress = stoi(s);
			Address* allAddress = new Address[numberAdress]();
			for (int i = 0; i < numberAdress; i++) {
				fin >> city;
				fin >> street;
				fin >> house;
				fin >> flat;
				allAddress[i]=Address(city, street, house, flat);
			}
			for (int i = 0; i < numberAdress; i++) {
				city = allAddress[i].getCity();
				for (int j = 0; j < numberAdress; j++) {
					city2 = allAddress[j].getCity();
					if (city.compare(city2) < 0) {
						Address temp;
						temp = allAddress[i];
						allAddress[i] = allAddress[j];
						allAddress[j] = temp;
					}
				};				
			}
			std::ofstream fout("out.txt");
			fout << numberAdress << std::endl;
			for (int i = 0; i < numberAdress; i++) {
				fout << allAddress[i].getAddress() << std::endl;
			}
			std::cout << "Адреса записаны в файл out.txt" << std::endl;
			fout.close();
			delete[] allAddress;
		}
		else
		{
			std::cout << "Файл написан некорректно!" << std::endl;
		}
	}
	else
	{
		std::cout << "Не получилось открыть файл!" << std::endl;
	}
	fin.close();

}