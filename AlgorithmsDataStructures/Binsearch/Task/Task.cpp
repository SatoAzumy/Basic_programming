#include <iostream>
#include <Windows.h>

int numberElements(int arr[], int size, int number);

void main()
{
	setlocale(LC_ALL, "rus"); // установка вывода на кириллице
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода

	int number, result = 0;
	int arr[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
	std::cout << "Введите точку отсчёта: ";
	std::cin >> number;
	result = numberElements(arr, 9, number);
	std::cout << "Количество элементов в массиве больших, чем " << number << ": " << result;

}

int numberElements(int arr[], int size, int number)
{
	int left = 0;
	int right = size - 1;
	int middle;
	int result = 0;
	while (left < right) {
		middle = (left + right) / 2;
		if (arr[middle] <= number) {
			left = middle + 1;
			result = middle;
		}
		else {
			right = middle - 1;
			result = size - middle;
		}

	}
	return result;
}

