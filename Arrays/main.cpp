#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;



void main() {
	setlocale(LC_ALL,"");

	int mas[10]{};
	cout << "Введите элементы массива, 10 элементов: "; cout << endl;
	for (int i = 0; i < 10; i++) {
		cin >> mas[i];
	}
	cout << endl;

	cout << "Прямой порядок элементов:" << endl;
	for (int i = 0; i < 10; i++) {
		int x = mas[i];
		cout << x << "\t";
	}
	cout << endl;

	cout << "Обратный порядок элементов:" << endl;
	for (int i = 9; i >= 0; i--) {
		int x = mas[i];
		cout << x << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += mas[i];
	}
		cout <<"Сумма элементов =  " << sum << endl;
		cout << endl;
		int sr = 0;
		sum = 0;
		for (int i = 0; i < 10; i++) {
			sum += mas[i];
		}
			sr = sum / 10;
		cout << "Среднее арифметическое = " << sr << endl;
		int max_number = INT_MIN;
		for (int i = 0; i < 10; i++) {
			if (mas[i] > max_number) {
				max_number = mas[i];
			}
		}
		cout <<"Максимальный элемент: " << max_number << endl;

		int min_number = INT_MAX;
		for (int i = 0; i < 10; i++) {
			if (mas[i] < min_number) {
				min_number = mas[i];
			}
		}
		cout << "Минимальный элемент: " << min_number << endl;
 }
