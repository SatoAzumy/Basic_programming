#include <iostream>
#include <Windows.h>

struct BankAccount
{
	int numPay;
	std::string name;
	double money;
};

void changeBalance(double &money, double newBalance) {
	money=newBalance;
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
	changeBalance(newBankAccount.money, newBalance);
	std::cout << "��� ����: " << newBankAccount.name << ", " << newBankAccount.numPay << ", " << newBankAccount.money;
}

