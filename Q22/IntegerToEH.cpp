#include <iostream>
#include <string>
using namespace std;

const static string single[] = {"","one","two","three","four","five","six","seven","eight","nine"};
const static string tenToTwe[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
const static string tens[] = {" "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
const static string hundred = "hundred";
const static string ad = "and";
//
int main () {
	int data;
	cin >> data;
	int hb = data / 100;
	int tensb = data - hb * 100;
	int singles = tensb - (tensb / 10) * 10;
	tensb /= 10;
	cout << single[hb] <<  " " << hundred;
	if (tensb != 0 || singles != 0) {
		cout << " " << ad << " ";
	}
	if (tensb == 1) {
		cout << tenToTwe[tensb*10 + singles - 10];
	} else if (tensb != 0) {
		cout << tens[tensb];
		if (singles != 0) {
			cout << " " << single[singles];
		}
	} else {
		if (singles != 0) {
			cout << single[singles];
		}
	}
	return 0;
}
