#include <iostream>
#include "tree.h"
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

void binaryMake(int data[] , int start, int end){
	if(start == end) {
//		tree = new BinarySearchTree(data[end]);
		cout << data[end] << " ";
		return ;
	}
	int center = end + start >> 1;;
	if (end - start >> 1 << 1 != end - start ){
		center = 1 + (end + start >> 1);
	}
	if(center != start) {
		binaryMake(data, start, center - 1);
	}
	if(center != end) {
		binaryMake(data, center + 1, end);
	}
}

int main() {
	int data[50000];
	int length = -1;
	string input ;
	getline(cin, input);
//	ofstream out("D:\\C++Project\\Q31\\out.txt",ios::app);
//	if(out.is_open()){
//		out << input << endl;
//		out.close();
//	}
	istringstream is(input);
	while(is >> data[length + 1]){length ++;};
	if(length < 0) {
		return 0;
	}
//	BinarySearchTree *root = new BinarySearchTree(-1);
	binaryMake(data, 0, length);
//	root->inPrderPrint();
	return 0;
}

