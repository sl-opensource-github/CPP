#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int left, int right, int search_value)
{
	if (right >= left) {
		int mid = left + (right - left) / 2;

		if (array[mid] == search_value)
			return mid;

		if (array[mid] > search_value)
			return binarySearch(array, left, mid - 1, search_value);

		return binarySearch(array, mid + 1, right, search_value);
	}

	return -1;
}

int main(void)
{
	int array[] = { 2, 3, 4, 10, 40 };
	int search_value = 10;
	int n = sizeof(ay) / sizeof(array[0]);
	int result = binarySearch(array, 0, n - 1, search_value);
	(result == -1) ? cout << "Element is not found"
				: cout << "Element is at index " << result;
	return 0;
}
