#include <vector>
using namespace std;
class CircleList {
private:
	vector<int> datas;
	vector<int>::iterator it;
public :
	CircleList(int size) {
		for(int i = 1; i <= size; i++) {
			datas.push_back(i);
		}
		it = datas.begin();
	}
	~CircleList(){delete &datas;}
	void add(int data);
	int next();
	int size();
	void remove();
	int here(){
		return *it;
	}
};
