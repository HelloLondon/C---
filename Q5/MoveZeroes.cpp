#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> nZ;
	vector<int> Z;
	for(int i = 0 ; i < n ; i ++) {
		int temp ;
		cin >> temp;
		if (temp == 0) {
			Z.push_back(temp);
		} else {
			nZ.push_back(temp);
		}
	}

	nZ.insert(nZ.end(), Z.begin(), Z.end());
//	for (vector<int> :: iterator it = nZ.begin(); it !=nZ.end(); it ++) {
//		cout << *it ;
//	}
	int i ;
	for (i = 0; i < nZ.size() - 1;  i ++) {
		cout << nZ[i] << " ";
	}
	cout << nZ[i] ;
	return 0;
}

