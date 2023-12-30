#include <iostream>
using namespace std;

class Alpha {
	int data;
public:
	Alpha(int dd = 0) : data(dd) {}
	void showData() {
		cout << data;
	}
	int operator = (Alpha& a) {
		data = a.data + 3;
		return data;
	}
};
int main()
{
	Alpha a(30);
	a.showData();
	Alpha b;

	b = a;
	b.showData();
}
