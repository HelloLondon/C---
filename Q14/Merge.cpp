#include <iostream>

using namespace std;

inline void getInput(int n, int nums[]) {
	for (int i = 0 ; i < n ; i ++) {
		cin >> nums[i];
	}
}

void merge (int m, int nums1[], int n, int nums2[], int result[]) {
		int ptr1 = 0;
		int ptr2 = 0;
		for (int i = 0; i < m + n ; i ++) {
			if (ptr1 >= m ) {
				for (int j = ptr2 ; j < n ; j ++) {
					result[i] = nums2[j];
					i ++;
				}
				break;
			}
			if (ptr2 >= n ) {
				for (int j = ptr1; j < m; j ++) {
					result[i] = nums1[j];
					i ++ ;
				}
				break;
			}
			if (nums1[ptr1] <= nums2[ptr2]) {
				result[i] = nums1[ptr1];
				ptr1 ++;
			} else {
				result[i] = nums2[ptr2];
				ptr2 ++;
			}
		}
}

inline void sort(int data[], int n) {
	for (int i = 0; i < n; i ++) {
		for (int j = i; j < n - 1; j ++) {
			if (data[j] > data[j + 1]) {
				int temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
			}
		}
	}
}

int main () {
	int m ;
	cin >> m;
	int nums1[m];
	getInput(m,nums1);
	int n ;
	cin >> n;
	int nums2[n];
	getInput(n, nums2);
//	sort(nums1, m);
//	sort(nums2, n);

	int result [m + n];
//	for (int k  = 0; k < m  ; k ++) {
//		result[k] = nums1[k];
//	}
//	for (int k = m; k < m + n; k ++) {
//		result[k] = nums2[k];
//	}
//	sort(result,m+n);
	merge(m,nums1,n,nums2,result);
	int i ;
	for (i = 0 ; i < m + n - 1; i ++) {
		cout << result[i] << " ";
	}
//	if (m >0 || n > 0){
		cout << result[i];
//	}

	return 0;
}
