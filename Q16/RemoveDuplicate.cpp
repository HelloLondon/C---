#include <iostream>
#include <vector>
using namespace std;

enum State{
	NOSAME,
	FIRSTIN,
	TWOALREADY
};

int main() {
	int n;
	cin >> n;
	if (n==0) {
		cout << 0 << endl;
		return 0;
	}
	vector<int> inputList;
	/**
	 *  0 means last is deal
	 *  1 means one is input
	 *  2 means there is two already;
	 */
	State state = NOSAME;
	int each;
	state = FIRSTIN;
	cin >> each;
	inputList.push_back(each);
	for (int i = 1 ; i < n ; i ++) {
		cin >> each;
		if (state == FIRSTIN) {
			if(*(inputList.end()-1) == each) {
				state = TWOALREADY;
			}
			inputList.push_back(each);
		} else if (state == TWOALREADY) {
			if(*(inputList.end()-1) != each) {
				inputList.push_back(each);
				state = FIRSTIN;
			}
		}
	}
	int size = inputList.size();
	cout << size << endl;
	for (int i = 0; i < size - 1; i ++) {
		cout << inputList[i] << " ";
	}
	if (size != 0) {
		cout << inputList[size - 1];
	}
	return 0;
}
