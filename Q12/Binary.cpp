#include <iostream>
using namespace std;

int calOnes (int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	return calOnes(n >> 1) + (n >> 1 << 1 == n ? 0 : 1);
}

int main () {
	int n ;
	cin >> n;
	cout << calOnes(n);
}
