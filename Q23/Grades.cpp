#include <iostream>
#include <vector>
using namespace std;
//
//int main () {
//	int sum = 0;
//	vector<int> num;
////	int min = 0x0FFFFFFF;
//	for ( ; ; ) {
//		int each;
//		cin >> each;
//		if (each < 0) {
//			break;
//		} else {
////			if (each < min) {
////				min = each;
////			}
//			num.push_back(each);
//			sum += each;
//		}
//	}
//	int size = num.size();
//	if (size != 0) {
//		double avg = ((double)sum) / (double)size;
//		cout << (int)avg;
//		int data[size];
//		int ptr = 0;
//		for (int i = 0; i < size ; i ++) {
//			if (num[i] < avg) {
//				data[ptr] = num[i];
//				ptr ++;
//			}
//		}
//		ptr --;
//		if (ptr >= 0) {
//			cout << endl;
//			for (int i = 0; i <= ptr - 1; i ++) {
//				cout << data[i] << " ";
//			}
//			cout << data[ptr];
//		}
//
////		if (min < avg) {
////			cout << endl;
////			int wait = -1;
////			for (int i = 0; i < size; i ++) {
////				if (num[i] < avg) {
////					if (wait >= 0) {
////						cout << wait << " ";
////					}
////					wait = num[i];
////				}
////			}
////			cout << wait ;
////		}
//	} else {
//		cout << 0;
//	}
//	return 0;
//}