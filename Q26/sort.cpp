#include "sort.h"

void sortColors(int* nums, int numSize) {
	int red = 0;
	int white = 0;
	for(int i = 0; i < numSize; i ++) {
		if(nums[i] == 0) {
			red ++;
		} else if (nums[i] == 1) {
			white ++;
		}
	}
	int i = 0;
	for ( ; i < red; i ++) {
		nums[i] = 0;
	}
	for(;i<red + white; i ++) {
		nums[i] = 1;
	}
	for(; i<numSize; i ++) {
		nums[i] = 2;
	}
}
