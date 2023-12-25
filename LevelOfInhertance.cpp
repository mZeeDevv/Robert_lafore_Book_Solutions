#include <iostream>
using namespace std;

class Employ {
    string name;
    string number;
    public:
    Employ() : name() , number() {}
    void getData() {
        cout << "Enter name : ";
        cin>>name;
        cout << "Enter number : ";
        cin>>number;
    }
    void putData() {
        cout << "Name : " << name << "Number : " << number << endl;
    }
};


class laborer: public Employ {
};
class foreman: public laborer {
    float quota;
    public:
    void getData(){
        laborer::getData();
        cout << "Enter total quota met : ";
        cin>>quota;
    }
    void putData(){
        laborer::putData();
        cout<< "Total Quote : " << quota << endl;
    }
};

int main()
{
    foreman l1;
    l1.getData();
    l1.putDa
