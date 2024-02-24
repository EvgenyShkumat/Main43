#include <iostream>

int find_min_abs_num(int* vector, int size) {
	int min = abs(*vector);
	int index = 0;
	
	for (int i = 1; i < size; i++)
	{
		if (min > abs(*(vector + i))) {
			min = abs(*(vector + i));
			index = i;
		}
	}

	return index;
}

int find_max_abs_num(int* vector, int size) {
	int max = *vector;
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (max <= *(vector + i)) {
			max = *(vector + i);
			index = i;
		}
	}

	return index;
}

int sum_betweem_min_max(int* vector, int size, int min, int max) {
	int sum = 0;

	if (min > max) {
		std::swap(min, max);
	}

	for (int i = ++min; i < max; i++)
	{
		sum += *(vector + i);
	}

	return sum;
}
