#include "sort.h"


int main() {


	int numSize;

	cin >> numSize;

	int *nums = new int[numSize];

	for (int i = 0; i < numSize; i++) {
		cin >> nums[i];
	}

	sortColors(nums, numSize);

	for (int i = 0; i < numSize - 1; i++) {
		cout << nums[i] << " ";
	}
	cout << nums[numSize-1];
	delete[] nums;

	return 0;
}
