#include <iostream>
#include <iomanip>
using namespace std;

const static int LENGHT = 1000;
const static int PRECISION = 10000;

int* sum (int* a, int* b) {
	for (int i = LENGHT - 1 ; i >= 0; i --) {
		int eachSum = b[i] + a[i];
		if (eachSum > PRECISION) {
			b[i] = eachSum - PRECISION;
			b[i - 1] ++;
			for (int j = i - 1; j >= 0; j --) {
				if (b[j] == PRECISION) {
					b[j] = 0;
					b[j - 1] ++;
				} else {
					break;
				}
			}
		} else {
			b[i] = eachSum;
		}
	}
	return b;
}

void getEnoughSpace (int n, int* const nums) {
	for (int i = 0; i < LENGHT ; i ++) {
		nums[i] = 0;
	}
	int index = LENGHT - 1;
	while (n > 0) {
		nums[index] = n - (n /PRECISION) * PRECISION;
		n /= PRECISION;
		index --;
	}
}

void printArray (int* result) {
	int i = 0;
	for ( ; i < LENGHT; i ++) {
		if (result[i] != 0) {
			break;
		}
	}
	if (i == LENGHT) {
		cout << 0;
	} else {
		cout << result[i];
		i ++;
		for ( ; i < LENGHT; i ++) {
			cout << setw(4) << setfill('0') << result[i];
		}
	}

}

int main (){
	int n;
	cin >> n;
	if (n == 0 || n == 1) {
		cout << n ;
		return 0;
	}

	int* result = new int [LENGHT];
	int* fn = new int [LENGHT];
	getEnoughSpace(1, result);
	getEnoughSpace(0, fn);

	for(int i = 2; i <= n ; i ++) {
		int* temp = result;
		result = sum(result, fn);
		fn = temp;
	}

	printArray(result);

	delete result;
	delete fn;
	return 0;
}
