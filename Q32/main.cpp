#include <iostream>
#include "list.h"
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

void parseInput(LinkedList *, int[]);

int main() {
//		ofstream out("D:\\C++Project\\Q32\\out.txt",ios::app);
//		if(out.is_open()){
//			out << input << endl;
//			out.close();
//		}
	LinkedList *list = new LinkedList();
	while(true) {
		int num;
		cin >> num;
//		out << num << " ";
		if(num == -1) {
			break;
		}
		list->add(num);
	}

//	out << endl;
	int count;
	cin >> count;
//	cout << count;
//	out << count << endl;
//	string tempp;
//	getline(cin, tempp	);
//	for (int i = 0; i < count;i ++) {
//		string input;
//		getline(cin, input);
//		out << input << endl;
//	}
//	out << endl;
//	out.close();
	int operation[count][3];
	for(int i = 0; i < count ; i ++) {
		cin >> operation[i][0];
//		cout << operation[i][0]<<endl;
		switch(operation[i][0]) {
		case 0:
			break;
		case 1:
			cin >> operation[i][1] ;
			cin >> operation[i][2];
			break;
		case 2:
			cin >> operation[i][1];
			break;
		case 3:
			cin >> operation[i][1];
			break;
		default:
			break;
		}
	}
	for(int i = 0; i < count ; i ++) {
		parseInput(list,operation[i]);
	}
	delete list;
	return 0;
	/*
1 2 3 4 5 -1
5
0
1 6 5
2 6
3 0
0
	 */
}

void parseInput(LinkedList *list , int *operation) {
	switch(operation[0]) {
	case 0:
		list->print();
		cout << endl;
		break;
	case 1:
		list->insert(operation[1], operation[2]);
		break;
	case 2:
		list->remove(operation[1]);
		break;
	case 3:
		list->rotate(operation[1]);
		break;
	default:
		break;
	}

}
