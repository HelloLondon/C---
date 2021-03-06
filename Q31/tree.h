//#include <iostream>
#include <strstream>
using namespace std;
class BinarySearchTree {
public:
	int root;
	BinarySearchTree *leftTree;
	BinarySearchTree *rightTree;
	BinarySearchTree(int root): root(root), leftTree(NULL), rightTree(NULL){};
	~BinarySearchTree(){
		if(leftTree!=NULL){
			delete leftTree;
		}
		if(rightTree!=NULL){
			delete rightTree;
		}
	};
	void add(int val);
	int height();
	void inPrderPrint();
	bool isHBTree();
};
