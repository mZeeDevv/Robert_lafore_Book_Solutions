#include <iostream>
using namespace std;

class B;

class A {
    int data;
    public:
    A() : data(3) {}
    friend int showData(A, B);
};
class B {
    int data;
    public:
    B() : data(61) {}
    friend int showData(A, B);
};

int showData(A a, B b){
    return {a.data + b.data};
}
int main()
{
    A a;
    B b;
    
    int me = showData(a, b);
    cout << me;
}
