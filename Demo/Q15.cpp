#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct TStudent {
	char name[20];
	int age;
};

int compareByName (const void*elem1,const void*elem2) {
	TStudent * st = (TStudent*) elem1;
	cout << st->age;
	st -> age = 10;
	return strcmp(((TStudent *)elem1)->name,((TStudent *)elem2)->name);
}

int main() {

	return 0;
}




