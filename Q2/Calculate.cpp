#include <iostream>

using namespace std;


int main() {
	int base, index;
	int result = 1;
	cin >> base >> index ;
    for (int i = index; i >=1; i --) {
    	result *= base;
    }
    cout << result;
}


