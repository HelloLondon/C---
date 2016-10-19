#include <iostream>

using namespace std;

int findMin(const int*, int);

int main () {
	int n ;
	cin >> n ;
	int* nums = new int[n];
	for (int i = 0; i < n; i ++) {
		cin >> nums[i];
	}
	cout << findMin(nums, n);
	return 0;
}

int findMin(const int* nums, int n){
	int min = nums[0];
	for (int i = 1; i < n ; i ++) {
		if (nums[i] < min) {
			min = nums[i];
		}
	}
	return  min;
}

