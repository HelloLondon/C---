#include <iostream>
#include <fstream>

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

void sort(int data[], int n) {
	for (int i = 0; i < n - 1; i ++) {
		for (int j = n - 1; j > i; j --) {
			if (data[j] < data[j - 1]) {
				int temp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = temp;
			}
		}
	}
}

int main () {
	int m ;
	cin >> m;
	int nums1[m];
	getInput(m,nums1);
	bool is = true;
	if ( m != 0) {
		is = nums1[m - 1] >= nums1[0];
	}
	int n ;
	cin >> n;
	int nums2[n];
	getInput(n, nums2);
	if (m == 0) {
		is = nums2[n - 1] >= nums2[0];
	}
	sort(nums1, m);
	sort(nums2, n);
//	for(int i = 0; i < m ; i ++) {
//		cout << nums1[i] << " ";
//	}
//	cout << endl;
	if(m==0&&n==0) {
//		cout << "";
		return 0;
	}
//	ofstream out("D:\\C++Project\\Q14\\test.txt",ios::app);
//	if (out.is_open()) {
//		out << m << endl;
//		for (int i = 0; i < m; i ++) {
//			out << nums1[i] << " ";
//		}
//		out << endl;
//
//		out.close();
//	}
	int result [m + n];
//	for (int k  = 0; k < m  ; k ++) {
//		result[k] = nums1[k];
//	}s
//	for (int k = m; k < m + n; k ++) {
//		result[k] = nums2[k];
//	}
//	sort(result,m+n);
	merge(m,nums1,n,nums2,result);
	if (is ) {
		int i ;
			for (i = 0 ; i < m + n - 1; i ++) {
				cout << result[i] << " ";
			}
			if (m >0 || n > 0){
				cout << result[i];
			}
	} else {
		int i ;
					for (i =  m + n - 1 ; i > 0; i --) {
						cout << result[i] << " ";
					}
					if (m >0 || n > 0){
						cout << result[0];
					}
	}
	return 0;
}
