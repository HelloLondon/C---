#include "tree.h"
#include <iostream>
/**
 * Get the height of tree by preorder
 */
int BinaryTree::height() {
	int rightHight = 0;
	int leftHight = 0;
	if(leftTree != NULL) {
		leftHight = leftTree->height();
	}
	if(rightTree != NULL) {
		rightHight = rightTree->height();
	}
	return 1 + (rightHight > leftHight ?  rightHight : leftHight);
}

void BinaryTree::add(int val) {
	if(val >= root) {
		if(rightTree == NULL) {
			rightTree = new BinaryTree(val);
		} else {
			rightTree->add(val);
		}
	} else if (val < root) {
		if(leftTree == NULL) {
			leftTree = new BinaryTree(val);
		} else {
			leftTree->add(val);
		}
	}
}

int BinaryTree::preOrderPrint(ostrstream &os) {
	os <<  root;
	int rightHeight = 0;
	int leftHight = 0;
	if(leftTree != NULL) {
		os << " ";
		leftHight = leftTree->preOrderPrint(os);
	}
//	os << ",";
	if(rightTree != NULL) {
		os << " ";
		rightHeight = rightTree->preOrderPrint(os);
	}
//	os << ")";
	return 1 + (rightHeight > leftHight ?  rightHeight : leftHight);
}
//递归中序遍历
void BinaryTree::inPrderPrint() {
	if(leftTree != NULL) {
		leftTree->inPrderPrint();
		cout << " ";
	}
	cout << root;
	if(rightTree != NULL) {
		cout << " ";
		rightTree->inPrderPrint();
	}
}
