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
	setlocale(LC_ALL, "rus"); // ��������� ������ �� ���������	
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����

	BankAccount newBankAccount = {};
	double newBalance;

	std::cout << "������� ����� �����: ";
	std::cin >> newBankAccount.numPay;
	std::cout << "������� ��� ���������: ";
	std::cin >> newBankAccount.name;
	std::cout << "������� ������ : ";
	std::cin >> newBankAccount.money;
	std::cout << "������� ����� ������: ";
	std::cin >> newBalance;
	newBankAccount.ChangeBalance(newBankAccount, newBalance);
	std::cout << "��� ����: " << newBankAccount.name << ", " << newBankAccount.numPay << ", " << newBankAccount.money;
}
