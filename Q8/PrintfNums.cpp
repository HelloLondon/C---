#include <iostream>

using namespace std;

void printfNums (int n) {
	if (n < 10) {
		cout << n;
		return;
	}
	int toPr = n / 10;
	printfNums(toPr);
	cout << " " << (n - toPr*10);
}

int main () {
	int n ;
	cin >> n ;
	printfNums(n);
	return 0;
}

