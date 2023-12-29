#include <iostream>
using namespace std;

class Dad;

class person {
    int Age;
    public:
    person() : Age(30) {}
    friend void show(person p1, Dad d1);
};
class Dad {
    int Age;
    public:
    Dad() : Age(60) {}
    friend void show(person p1, Dad d1);
};
void show(person p1, Dad d1)
{
    cout << "son Age is " << p1.Age << " and Father Age is " << d1.Age << endl;
}
int main()
{
    person p1;
    Dad d1;
    show(p1, d1);
}
