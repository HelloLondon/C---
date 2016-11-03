#include <iostream>
#include <fstream>
using namespace std;

int getLastA(int *people, int length,int start,int offset) {
		int result = start + offset ;
		if(result >= length) {
			result = result - length + 1;
		}
		int count = length - 1;
		do{
//			people[0] = result;
			people[result] = -1;
			count --;
			if (count == 0) {
				break;
			}
			int i = 0;
			for (;;) {
				result ++;
				if(result  >= length) {
					result = 1;
				}
				if (people[result] > 0) {
					i ++ ;
				}
				if (i == offset) {
					break;
				}
			}
		} while(true);
		return result;
}

int main() {
	int n;
	cin >> n;
	int start;
	cin >> start;
	if(n == 1) {
		cout << 0;
		return 0;
	}
	int people[n + 1];
//	ofstream out("D:\\C++Project\\Q34\\out.txt", ios::app);
//	if (out.is_open())
//	    {
//	         out << n << "   " << start << endl ;
//	         out.close();
//	     }
	for(int i = 0; i <= n; i ++) {
		people[i] = i;
	}
	cout << getLastA(people, n + 1, start, 3) - 1;

}
