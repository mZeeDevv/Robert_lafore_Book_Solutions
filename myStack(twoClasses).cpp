#include <iostream>
using namespace std;
#define MAX 3

class myStack {
    protected:
    int l[MAX];
    int top;
    public:
    myStack() : l{0}, top(-1) {}
    void push(int value) {
        top++;
        l[top] = value;
    }
    int pop() {
        return l[top];
        top--;
    }
};
class newStack:virtual public myStack {
    public:
    void push(int value){
        if(top == MAX -1 ) { 
            cout << "Array is full" << endl;
    }else {
        myStack::push(value);
    }
}
 int pop(){
        if(top == -1) {
            cout << "Array is Empty" << endl;
        } else {
           return myStack::pop();
        }
    }
    void display() {
        for(int i = 0; i < top; i++) {
            cout << l[i] << endl;
        }
    }
};
int main()
{
    newStack S1;
    S1.push(100);
    S1.push(200);
    S1.push(300);
    int a;
    a = S1.pop();
    cout << "The number " << a << " is removed from the array" << endl;
    S1.display();
}
