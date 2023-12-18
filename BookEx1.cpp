//Dervied and base class.
#include <iostream>
using namespace std;

class counter {
    protected:
    unsigned int count;
    public:
    int getCount() { return count;}
    int operator ++ () {return ++count;}
};
class secCounter: public counter{
    public:
    int operator -- () { return --count;}
};

int main()
{
    secCounter s1; 
    cout << s1.getCount() << endl;
    ++s1;
    cout << s1.getCount() << endl;
    --s1;
    ++s1;
    ++s1;
    cout << s1.getCount() << endl;
   

}