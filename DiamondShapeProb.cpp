#include <iostream>
using namespace std;

class person {
    string name;
public:
  person(string nn = ""): name(nn) {}
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
     father(string fnn, string nn) : person(nn), fName(fnn){}
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
 mother(string mnn, string nn) : person(nn), MotherN(mnn) {}
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
    child(string nn = "", string mnn = "", string fnn = "", int aa = 0) : person(nn), mother(mnn, nn), father(fnn, nn), Age(aa) {}
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
    child C1("Hamza", "Khattak" , "KING", 33);
    C1.getter();
    return 0;
}
