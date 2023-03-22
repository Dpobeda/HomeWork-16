#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Задача 1.
	/*
	const int size = 10;
	int arr[size];
	std::cout << "Задача 1.\nМассивы:\n";
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 101;
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b.\n";

	int sum = 0, counter = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			counter++;
			sum += arr[i];
		}
	}
	std::cout << "\nСредн.арифм = " << sum / (double)counter << std::endl;

	for (int i = 0; i < size; i++) {
		if (sum / (double)counter > arr[i])
			std::cout << "\nМеньше найденного среднего арифметического: " << arr[i];
	}
	std::cout << std::endl;*/

	// Задача 2.
	/*const int size1 = 25;
	const int size2 = 25;
	int arr1[size1]{
		5 , 6 , 7  ,46, 13,
		4 , 5 , 4  ,75, 42,
		41, 4 , 12 ,46, 23,
		48, 2 , 12 ,22, 19,
		11, 33, 44 ,55, 77,
	};
	int arr2[size2]
	{   5 , 3 , 1 , 54, 87,
		41, 51, 26, 75, 28,
		19, 36, 58, 44, 77,
		92, 68, 18, 28, 11,
		87, 17, 36, 25, 13,
	};

	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			std::cout << arr1[i + j] + arr2[i + j]; break; //вывод конечной матрицы
		}
		std::cout << " ";
	}
	std::cout << "\n";
	// Не было времени понять, как сделать ровненько :( ;*/

	// Задача 3.
	std::cout << "Введите шестизначное число -> ";
	std::cin >> n;
	if (n > 999999)
		std::cout << "Ошибка! Ваше число " << n << " не шестизначное. Может вы имели в виду это число ?" << "\n";
	if (n < 99999)
		std::cout << "Ошибка! Ваше число " << n << " не шестизначное. Может вы имели в виду это число ?" << "\n";

	int k;
	const int size = 5;
	int arr[size];
	k = n % 100000;
	for (int i = 1; i < size; i++) {
			std::cout << n;
	}

	return 0;
}