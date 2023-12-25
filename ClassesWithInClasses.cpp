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

class Scientist {
    int age;
    Employ E1;
    public:
    void getData() {
        E1.getData();
        cout << "Enter age of the Scientist :";
        cin>>age;
    }
    void putData() {
        E1.putData();
        cout << endl << "Age : " << age << endl;
    }
};
int main()
{
 Scientist S1;
 S1.getData();
 S1.putData();
}
