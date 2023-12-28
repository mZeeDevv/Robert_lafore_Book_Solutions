#include <iostream>
using namespace std;

class person {
    string name;
public:
    void setter() {
        cout << "Enter Child Name: ";
        cin >> name;
        cin.ignore(); // Ignore the newline character
    }
    void getter() {
        cout << "Child Name: " << name << endl;
    }
};

class father : virtual public person {
    string fName;
public:
    void setter() {
        cout << "Enter Father Name: ";
        cin >> fName;
        cin.ignore(); // Ignore the newline character
    }
    void getter() {
        cout << "Father Name: " << fName << endl;
    }
};

class mother : virtual public person {
    string MotherN;
public:
    void setter() {
        cout << "Enter Mother Name: ";
        cin >> MotherN;
        cin.ignore(); // Ignore the newline character
    }
    void getter() {
        cout << "Mother Name: " << MotherN << endl;
    }
};

class child : virtual public father, virtual public mother {
    int Age;
public:
    void setter() {
        person::setter();
        father::setter();
        mother::setter();
        cout << "Enter Child Age: ";
        cin >> Age;
    }
    void getter() {
        person::getter();
        father::getter();
        mother::getter();
        cout << "Child Age: " << Age << endl;
    }
};

int main() {
    child C1;
    C1.setter();
    C1.getter();
    return 0;
}
