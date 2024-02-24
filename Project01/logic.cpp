#include <iostream>

int find_min_abs_num(int* vector, int size) {
	int min = abs(*vector);
	
	for (int i = 1; i < size; i++)
	{
		if (min > abs(*(vector + i))) {
			min = abs(*(vector + i));
		}
	}

	return min;
}

int find_max_abs_num(int* vector, int size) {
	int max = *vector;

	for (int i = 1; i < size; i++)
	{
		if (max <= *(vector + i)) {
			max = *(vector + i);
		}
	}

	return max;
}

int sum_betweem_min_max(int* vector, int size, int min, int max) {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += *(vector + i);
	}

	return sum;
}