#include <iostream>
using namespace std;

class Publication{
    string title;
    float price;
    public:
    void setter(){
        cout << "!__ Enter Title __!" << endl;
        getline(cin, title);
        cout << "Enter Price of the Product " << endl;
        cin>>price;
    }
    void getter() const {
        cout << "Product Title : " <<title<<endl;
        cout<< "Price : " << price << endl;
    }
};
class book: virtual public Publication {
    int pages;
    public:
    void setter(){
         Publication::setter();
        cout << "Enter page count : ";
        cin>>pages;
    }
    void getter() const {
        Publication::getter();
        cout << "Page count : " << pages << endl;
    }
};
class tape: virtual public Publication {
    float minutes;
    public:
    void setter(){
         Publication::setter();
        cout << "Enter Total minutes count ";
        cin>>minutes;
    }
    void getter() const {
         Publication::getter();
        cout << "Total Minutes : " << minutes << endl;
    }
};

int main()
{
    book b1;
    tape t1;
    
    b1.setter();
    b1.getter();
    t1.setter();
    t1.getter();
}