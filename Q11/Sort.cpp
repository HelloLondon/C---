#include <iostream>
using namespace std;

const int A = 0;
const int B = 1;
const int C = 2;
const int D = 3;
const int E = 4;
const char LEVELS[] = {'A', 'B', 'C', 'D', 'E'};

char sort (int n) {
	int index;
	if (90 <= n && n <= 100){
		index = A;
	} else if (80 <= n && n <= 89) {
		index = B;
	} else if (70 <= n && n <= 79) {
		index = C;
	} else if (60 <= n && n <= 69) {
		index = D;
	} else {
		index = E;
	}
	return LEVELS[index];
}

int main (){
    int n;
    cin >> n;
    cout << sort(n);
    return 0;
}
