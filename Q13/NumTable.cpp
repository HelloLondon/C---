#include <iostream>
#include <cmath>
using namespace std;

/**
 *  Search the largest m that satisfies  m(m + 1) / 2
 */
int getLine (int n) {
	long line = (int)sqrt(n * 2) - 1;
	while (line*(line + 1) < n << 1) {
		line ++;
	}
	line --;
	return line;
}

int main () {
	int n ;
	cin >> n;

	int line = getLine(n);
	int offset = n - (line*(line  + 1) >> 1);
	int denominator, numerator;
	if (line >> 1 << 1 == line) {
		denominator = offset;
		numerator = line + 2 - offset;
	} else {
		numerator = offset;
		denominator = line + 2 - offset;
	}
	cout << numerator << "/" << denominator;
	return 0;
}
