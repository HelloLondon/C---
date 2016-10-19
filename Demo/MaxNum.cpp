#include <iostream>
using namespace std;

long long getMaxSum(int [], int);

//int main () {
//	int n ;
//	cin >> n;
//	int data[n];
//	for (int i = 0; i < n ; i ++) {
//		cin >> data[i];
//	}
//	long long sum = getMaxSum(data, n);
//	cout << sum;
//}

long long getMaxSum(int data[], int n) {
	long long maxSum = data[0];
	long long cur = 0;
	for (int i = 0 ; i < n ; i ++) {
		cur = 0;
		// each data is checked here
		for (int j = i; j < n; j ++) {
			cur += data[j];
			if (cur > maxSum) {
				maxSum = cur;
			}
		};
	}
	return maxSum;
}
