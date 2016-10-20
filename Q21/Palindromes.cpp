#include <iostream>
#include <cstring>
using namespace std;

bool palindrome (int data[], int start, int end) {
	for (;;) {
		if (start >= end) {
			return true;
		}
		if(data[start] != data[end]) {
			return false;
		}
		start ++;
		end --;
	}
}

int main() {
	int num;
	cin >> num;
	long n ;
	cin >> n;
	int data[10];
	int k = 1;
	while (n > 0) {
		int each = n - (n/10) * 10;
		data[10 - k] = each;
		k ++;
		n /= 10;
	}
	k --;
	int max = 1;
//	cout << k << endl;
//	for (int i = 10 - k ; i < 10 ; i ++) {
//		cout << data[i] << " ";
//	}
//	cout << endl;
	for (int i = 10 - k ; i < 10 ; i ++) {
		for (int j = 10 ; j > i ; j --) {
			if (max > j - i + 1) {
				break;
			}
			if (palindrome(data,i,j)) {
				if (max < j - i + 1) {
					max = j - i + 1;
				}
			}
		}
	}
	cout << max;
	return 0;
}
