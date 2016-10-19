#include <iostream>
using namespace std;

int main () {
	int n ;
	cin >> n;
//	if (n == 0) {
//		cout << "";
//		return 0;
//	}
	int data = 0;
	long maxSum = 0x80000000;
	long curSum = 0;
	for (int i = 0; i < n ; i ++) {
		cin >> data;
		if (curSum <= 0) {
			curSum = data;
		} else {
			curSum += data;
		}
		if (curSum > maxSum) {
			maxSum = curSum;
		}
	}
	cout << maxSum ;
}
