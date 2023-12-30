#include <iostream>
using namespace std;

class Alpha {
	int data;
	int data2;
public:
	Alpha(int dd = 0, int ddd = 0) : data(dd), data2(ddd) {}
	void showData() {
		cout << data << endl << data2 << endl;
	}
	Alpha operator = (Alpha& a) {
		data = a.data + 3;
		return *this;
	}
};
int main()
{
	Alpha a(30, 40);
	a.showData();
	Alpha b;
	b = a;
	b.showData();
}
