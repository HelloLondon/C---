#include <iostream>
using namespace std;

bool checkTheSame(int[], int);

int main(){
	int n;
	cin >> n;
	int datas[n];
	for (int i = 0 ; i < n ; i ++) {
		cin >> datas[i];
	}
	cout << (checkTheSame(datas, n-1) ? "true" : "false");
	return 0;
}

bool checkTheSame(int datas[], int end) {
	for (int i = end ;i >= 1; i --) {
		for (int j = i - 1; j >= 0; j --) {
			if(datas[i] == datas[j]) {
				return true;
			}
		}
	}
	return false;
}