#include <iostream>
using namespace std;
#define MAX 7
class myStack {
    int l[MAX];
    int top;
    public:
    myStack(): l{0}, top(-1) {}
    
    void push(int d){
        if(top == MAX -1 ) { 
            cout << "Array is full" << endl;
        }
        else { 
            ++top,
            l[top] = d;
        }
    }
    int Top() {
        if(top == -1 ){
             cout << "Array is Empty" << endl;
        }
        else { 
           return l[top--];
        }
    }
    void display() { 
        for(int i = 0; i < top + 1; i++) {
            cout << l[i+1] << endl;
        }
    }
};

int main()
{
    myStack s1;
    s1.push(100);
    s1.push(200);
    s1.push(300);
    s1.push(300);
    s1.push(300);
    s1.push(200);
    s1.push(900);
    int a;
    a = s1.Top();
    cout << "Top Value is : " << a << endl;
    s1.display();
}
