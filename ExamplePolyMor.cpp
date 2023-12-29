#include <iostream>
using namespace std;

class A {
public:
	virtual void show()
	{
		cout << "Call of Class A" << endl;
	}
};
class B: virtual public A {
	void show()
	{
		cout << "Call of Class B" << endl;
	}
};
class C : virtual public A {
	void show()
	{
		cout << "Call of Class C" << endl;
	}
};

int main()
{
	A* pptr;
	pptr = new A;
	pptr->show();
	pptr = new B;
	pptr->show();
	pptr = new C;
	pptr->show();
}
