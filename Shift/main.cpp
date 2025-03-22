#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main() {
	setlocale(LC_ALL, "");
	int numbers[10]{};
	for (int i = 0; i < 10; i++) {
		numbers[i]=i;
	cout << numbers[i] << "\t";
	}
	cout << endl;
	int n;
	cout << "¬ведите величину сдвига: "; cin >> n;
	for (int i = 0; i < 10; i++) {
		cout<< numbers[i+n]<<"\t";
	}


}