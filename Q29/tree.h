//#include <iostream>
#include <strstream>
using namespace std;
class BinaryTree {
public:
	int root;
	BinaryTree *leftTree;
	BinaryTree *rightTree;
	BinaryTree(int root): root(root), leftTree(NULL), rightTree(NULL){};
	~BinaryTree(){
		if(leftTree!=NULL){
			delete leftTree;
		}
		if(rightTree!=NULL){
			delete rightTree;
		}
	};
	void add(int val);
	int height();
	int preOrderPrint(ostrstream &os);
	void inPrderPrint();
	void makeTree(string preordrer);
};
