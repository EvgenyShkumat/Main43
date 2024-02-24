#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* array, int size);

int main() {
	int size, min, max;

	do
	{
		cout << "Input size: ";
		cin >> size;
		cout << "Input min value: ";
		cin >> min;
		cout << "Input max value: ";
		cin >> max;

	} while (size <= 0);

	if (max < min) {
		swap(max, min);
	}

	int* vector = new int[size];

	random_init(vector, size, min, max);

	cout << output(vector, size);

	return 0;
}