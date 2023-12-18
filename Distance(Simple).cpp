#include <iostream>
using namespace std;

class Distance {
    int feet;
    float inch;
    public:
    Distance(int f=0, int ic=0): feet(f), inch(ic) {}
    void getinfo() {
     cout << "Enter the feet : ";
     cin>>feet;
     cout << "Enter the Inches : ";
     cin>>inch;
    }
    
    void showinfo() {
        cout << "FEET : " << feet << endl;
        cout << "Inches : " << inch << endl;
    } 
};
int main() {
    Distance D1(20, 30);
    D1.showinfo();
}
