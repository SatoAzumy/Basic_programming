#include <iostream>
#include <Windows.h>

struct BankAccount
{
	int numPay;
	std::string name;
	double money;
	double ChangeBalance(struct BankAccount& newBankAccount, double newBalance)
	{
		return newBankAccount.money = newBalance;
	};

};


int main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице	
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода

	BankAccount newBankAccount = {};
	double newBalance;

	std::cout << "¬ведите номер счЄта: ";
	std::cin >> newBankAccount.numPay;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> newBankAccount.name;
	std::cout << "¬ведите баланс : ";
	std::cin >> newBankAccount.money;
	std::cout << "¬ведите новый баланс: ";
	std::cin >> newBalance;
	newBankAccount.ChangeBalance(newBankAccount, newBalance);
	std::cout << "¬аш счЄт: " << newBankAccount.name << ", " << newBankAccount.numPay << ", " << newBankAccount.money;
}
