#include <iostream>

using namespace std;

inline bool checkOdd (int num) {
	return num != (num >> 1 << 1);
}

int main() {
	int low, large;
	int result = 0;
	cin >> low >> large ;
    for (int i = low; i <= large; i++) {
    	if (checkOdd(i)) result += i;
    }
    cout << result;
}
