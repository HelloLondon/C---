#include <iostream>
using namespace std;

int main() {
	int n ;
	cin >> n;
	int data[n];
	for (int i = 0; i < n ; i ++) {
		cin >> data[i];
	}
	long long maxP = data[0];
	long long cur = 1;
	for (int i = 0; i < n; i ++) {
		cur = 1;
		for (int j = i; j < n; j ++) {
			cur *= data[j];
			if (cur > maxP) {
				maxP = cur;
			}
			if (cur == 0) {
				break;
			}
		}
	}
	cout << maxP;
}