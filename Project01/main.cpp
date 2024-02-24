#include <iostream>
using namespace std;

void random_init(int* vector, int size, int min, int max);
string output(int* array, int size);

int find_min_abs_num(int* vector, int size);
int find_max_abs_num(int* vector, int size);
int sum_betweem_min_max(int* vector, int size, int min, int max);

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

	int min_range = find_min_abs_num(vector, size);
	int max_range = find_max_abs_num(vector, size);

	cout << "\nmin: " << min_range << " max: " << max_range << endl;

	cout << "The sum of vector values between min and max is: "
		<< sum_betweem_min_max(vector, size, min_range, max_range);

	return 0;
}