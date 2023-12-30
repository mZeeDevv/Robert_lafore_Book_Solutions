#include <iostream>
using namespace std;
class second;
class Distance {
	int feat;
	float inches;
public:
	Distance(int ff = 30, float in = 4.0) : feat(ff), inches(in) {}
	friend class second;
};
class second {
public:
	void showData(Distance d) {
		cout << "Distance : " << d.feat << endl;
		cout << "Inches : " << d.inches << endl;
	}
};
int main()
{
	Distance d1(40, 30);
	second s1;
	s1.showData(d1);
}
