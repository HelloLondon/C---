//============================================================================
// Name        : Q23.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
bool firstIn = true;
int main() {
	int grades[100], num = 0;
       double average=0;
	cin >> grades[num];
	while ((grades[num]) >= 0) {
		average += grades[num];
		num++;
		cin >> grades[num];
	}
	average =  average / num;

	cout << (int)average;
	int position;
	for (position = 0; position < num; position++) {
		if (grades[position] < average) {
			cout << endl;
			break;
		}
	}
	for (position=0; position < num ; position++) {
		if (grades[position] < average) {
			if (firstIn) {
				cout << grades[position];
				firstIn = false;
			} else {
				cout << " " << grades[position];
			}
		}
	}

}
