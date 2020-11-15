#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

template <typename T1>

T1 CreateT(T1* c, const int size, T1 min, T1 max) {
	for (int i = 0; i < size; i++) {
		c[i] = min + rand() % (max - min + 1);
	}
	return 0;
}

template <typename T2>

T2 arrPrintT(T2* c, const int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(4) << c[i];
	}
	cout << endl;

	return 0;
}

template <typename T3>

T3 arrCountT(T3* c, const int size, int z) {
	for (int i = 0; i < size; i++) {
		if (c[i] % 2 != 0) {
			z++;
		}
	}
	return z;

}

void Create(int* c, const int size, int min, int max) {
	for (int i = 0; i < size; i++) {
		c[i] = min + rand() % (max - min + 1);
	}
}

void arrPrint(int* c, const int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(4) << c[i];
	}
	cout << endl;
}

int arrCount(int* c, const int size, int z) {
	for (int i = 0; i < size; i++) {
		if (c[i] % 2 != 0) {
			z++;
		}
	}
	return z;
}


int main()
{
	srand((unsigned)time(NULL));

	const int a = 25;

	int c[a];

	int Low = 5;
	int High = 90;

	cout << "Using tempaltes" << endl;

	CreateT(c, a, Low, High);
	arrPrintT(c, a);
	cout << "c[i] % 2 != 0 count: " << arrCountT(c, a, 0) << endl;

	cout << "Without tempaltes" << endl;

	Create(c, a, Low, High);
	arrPrint(c, a);
	cout << "c[i] % 2 != 0 count: " << arrCount(c, a, 0) << endl;

	system("pause");
	cin.get();
	return 0;
}
