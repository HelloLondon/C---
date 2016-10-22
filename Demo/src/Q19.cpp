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
//	cout << a << endl << res;
//	fprintf(f, "\n\n");
//	fclose(f);
	return 0;
}

