#include <iostream>
#include <fstream>
using namespace std;

int n,m;
int data[100000];

long search (long low, long high) {
	while (low < high) {
		int set = 1;
		long mid = (low + high) /2 ;
		long sum = 0;
		for (int i = 0; i < n ; i ++) {
//			sum += data[i];
//			//Out;
//			if (sum > mid) {
//				set ++;
//				sum = data[i];
//			}
			if(sum + data[i] <= mid)
				sum += data[i];
			else{
				set++;
			    sum = data[i];
			}
		}
		if (set <= m) {
			high = mid;
		} else {
			low = mid+1;
		}
	}
	return low;
}

int main () {
	cin >> m >> n;
	long max = -10000000;
	long sum = 0;
	for (int i = 0 ; i < n ; i ++ ){
		cin >> data[i];
		sum += data[i];
		if (max < data[i]) {
			max = data[i];
		}
	}
	ofstream out("D:\\C++Project\\Q20\\Test.txt",ios::app);
	if (out.is_open()) {
		out << m << endl << n << endl;
		for (int i = 0; i < n; i ++) {
			out << data[i] << " " ;
		}
		out << endl;
	}
	if (m > n) {
		cout << max;
		return 0;
	}
	cout << search(max,sum);
}

