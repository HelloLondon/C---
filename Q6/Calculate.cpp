#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calSin(double);

int main() {
	double r, s;
	double result = 0.00;
	cin >> r >> s ;
    if (r*r <= s*s) {
    	double sinR = calSin(r);
    	double sinS = calSin(s);
    	result = sqrt(sinR*sinR + sinS*sinS);
    } else {
    	result = calSin(s*r) / 2;
    }
    cout << setiosflags(ios::fixed) << setprecision(6) << result ;
}

inline bool checkOdd (int num) {
	return num != (num >> 1 << 1);
}

double calSin(double num) {
	double result = num;
	double numSqr = num * num;
	double lastResult = num;
	for (int i = 2; i <= 1000001; i ++) {
		double abs = lastResult * numSqr / ((2 * i - 2) * (2 * i - 1));
		lastResult = abs;
		if (checkOdd(i)) {
			result += abs;
		} else {
			result -= abs;
		}
	}
	return result;
}


