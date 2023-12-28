#include <iostream>
using namespace std;

class person {
    string name;
    string cnic;
    public:
    virtual void setter()
    {
        cout << "Enter Person Name : ";
        cin>>name;
        cout << "Enter CNIC : ";
        cin>>cnic;
    }
    virtual void getter(){
        cout << "******************** DATA ********************" << endl;
        cout << "Person Name : " << name << endl << "CNIC : " << cnic << endl;
    }
};
class teacher: public person {
      string Dep;
      string years;
    public:
    void setter()
    {
         person::setter();
        cout << "Enter Dep Name : ";
        cin>>Dep;
        cout << "Enter Year of Exp : ";
        cin>>years;
    }
    void getter(){
         person::getter();
        cout << "Depatartment : " << Dep << endl << "Exp : " << years << endl;
    }
};

class student: public person {
      string deg;
      float gpa; 
    public:
    void setter()
    {
        person::setter();
        cout << "Enter Degree : ";
        cin>>deg;
        cout << "Enter current CPGA : ";
        cin>>gpa;
    }
    void getter(){
        person::getter();
        cout << "Degree : " << deg << endl << "CPGA : " << gpa << endl;
    }
};

int main()
{
    person* pptr;
    
    pptr = new teacher;
    pptr->setter();
    pptr->getter();
    
   delete pptr;
}
