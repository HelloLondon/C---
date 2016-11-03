//#include <iostream>
#include <strstream>
using namespace std;
class BinarySearchTree {
private  :
	int root;
	BinarySearchTree *leftTree;
	BinarySearchTree *rightTree;
public:
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
	void print(ostrstream &os);
};
