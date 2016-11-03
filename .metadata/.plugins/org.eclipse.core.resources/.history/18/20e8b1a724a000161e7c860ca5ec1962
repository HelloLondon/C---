#include "tree.h"

int BinarySearchTree::height() {

	return 0;
}

void BinarySearchTree::add(int val) {
	if(val >= root) {
		if(rightTree == NULL) {
			rightTree = new BinarySearchTree(val);
		} else {
			rightTree->add(val);
		}
	} else if (val < root) {
		if(leftTree == NULL) {
			leftTree = new BinarySearchTree(val);
		} else {
			leftTree->add(val);
		}
	}
}

void BinarySearchTree::print(ostrstream &os) {
	os << root;
	os << "(" ;
	if(leftTree != NULL) {
		leftTree->print(os);
	}
	os << ",";
	if(rightTree != NULL) {
		rightTree->print(os);
	}
	os << ")";
}
