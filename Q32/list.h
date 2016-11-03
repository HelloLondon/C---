#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) :val(x),next(NULL){}
};

class LinkedList {

private:
	ListNode *start;
	ListNode *last;
	int size;
	void remove(ListNode *pre);
public:
	LinkedList();
	~LinkedList();
	void add(int x);
	int get();
	void remove(int value);
	void insert(int val, int pos);
	void print();
	int getSize(){return size;};
	void rotate(int k);
};
