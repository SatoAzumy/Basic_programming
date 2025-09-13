#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

class Adress
{
public:
	void setAdress(std::string newCity, std::string newStreet, std::string newHouse, std::string newFlat) {
		city = newCity;
		street = newStreet;
		house = newHouse;
		flat = newFlat;
	};
	std::string getAdress() { return city + ", " + street + ", " + house + ", " + flat; };
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
		if (!(fin >> s).eof())
		{
			numberAdress = stoi(s);
			Adress* allAdress = new Adress[numberAdress]();
			for (int i = 0; i < numberAdress; i++) {
				fin >> city;
				fin >> street;
				fin >> house;
				fin >> flat;
				allAdress[i].setAdress(city, street, house, flat);
			}
			for (int i = 0; i < numberAdress; i++) {
				city = allAdress[i].getCity();
				for (int j = i; j < numberAdress; j++) {
					city2 = allAdress[j].getCity();
					if (city.compare(city2) > 0) {
						Adress temp;
						temp = allAdress[i];
						allAdress[i] = allAdress[j];
						allAdress[j] = temp;
					}
				}
				
			}
			std::ofstream fout("out.txt");
			fout << numberAdress << std::endl;
			for (int i = 0; i < numberAdress; i++) {
				fout << allAdress[i].getAdress() << std::endl;
			}
			std::cout << "Адреса записаны в файл out.txt" << std::endl;
			fout.close();
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