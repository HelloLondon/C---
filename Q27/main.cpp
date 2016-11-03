#include<iostream>
using namespace std;

int binarySearch(int *data,int n,int s,int e) {
	int cur = (s+e) / 2;
//	cout << cur << endl;
		int count = 0;
		for(int i = 0; i < n; i ++) {
			if (cur == data[i]){
				count ++;
				if(count >= 2) {
					return cur;
				}
			}
		}
		if(s==e) {
			return 0;
		}
		int up = binarySearch(data,n,cur+1,e);
//		cout << "Up " << up << endl;
		if(up != 0) {
			return up;
		}
		int down = binarySearch(data,n,s,cur);
//		cout << "Down " << down << endl;
		if(down != 0) {
			return down;
		}
	return 0;
}

int main() {
	int n;
	cin >> n;
	int data[n];
	for(int i = 0; i < n; i ++) {
		cin >> data[i];
	}
	cout << binarySearch(data,n,1,n);

	return 0;
}
