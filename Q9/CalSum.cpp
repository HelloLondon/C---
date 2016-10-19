#include <iostream>

using namespace std;

inline bool checkPrimer (int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= n >> 1; i ++) {
		if ((n / i) * i == n) {
			return false;
		}
	}
	return true;
}

int main () {
	int low, large;
	int result = 0;
	cin >> low >> large ;
	for(int i = low; i <= large; i ++) {
		if (checkPrimer(i)) {
			result += i;
		}
	}
	cout << result;
	return 0;
}
