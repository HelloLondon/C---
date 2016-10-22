//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//	int n ;
//	cin >> n;
//	int data[n];
//	for (int i = 0; i < n ; i ++) {
//		cin >> data[i];
//	}
////	ofstream out("D:\\C++Project\\Q19\\test.txt",ios::app);
////	if (out.is_open()) {
////		out << n << endl;
////		for (int i = 0; i < n; i ++) {
////			out << data[i] << " ";
////		}
////		out << endl;
////
////		out.close();
////	}
////	if (n == 10000) {
////		return 0;
////	}
//	long long maxP = -10000000;
//	long long cur = 1;
//	int i;
//	int j;
//	int a=-1,b=-1;
//	for ( i = 0; i < n; i ++) {
//		cur = 1;
//		for (j = i; j < n; j ++) {
//			cur *= data[j];
//			if (cur > maxP) {
//				maxP = cur;
//				a = i;b=j;
//			}
////			if (cur == 0) {
////				break;
////			9223372036854775807
////			8861914186293182464
////			}
//		}
//	}
//	cout << a << " "<< b<< endl;
//	cout << maxP;
//}
#include <iostream>

using namespace std;

int main() {
//	FILE *f;
//	f = fopen("/Users/huangxiao/Documents/C++Test/Q19.txt", "at");
	int n, num;
	int a=0;
	long long dp1 = 0, dp2 = 0, res = 0;
	cin >> n;
//	fprintf(f, "%d\n", n);
	cin >> num;
//	fprintf(f, "%d ", num);
	if(num > 0)
		res = dp1 = num;
	if(num < 0)
		res = dp2 = num;
	for (int i = 1; i < n; ++i) {
		cin >> num;
//		fprintf(f, "%d ", num);
		if(num == 0)
			dp1 = dp2 = 0;
		if(num > 0) {
			dp1 = (dp1 == 0 ? num : dp1 * num);
			dp2 *= num;
		}
		if(num < 0) {
			long long temp = dp2;
			dp2 = (dp1 == 0 ? num : dp1 * num);
			dp1 = temp * num;
		}
		if(dp1 > res)
			res = dp1;
			a=i;
	}
	cout << res;
//	fprintf(f, "\n\n");
//	fclose(f);
	return 0;
}
