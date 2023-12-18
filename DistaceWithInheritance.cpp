#include <iostream>
using namespace std;
enum posneg  {pos, neg};
class Distance {
    protected:
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
////////////////////////////////////////////////////
class signShow: virtual private Distance {
    posneg sign;
    public:
    signShow(int f=0, float inc=0, posneg sg=pos) : Distance(f,inc) {sign = sg;}
    
    void getinfo() {
        Distance::getinfo();
        char c;
        cout << "Enter the sign (- or +) : ";
        cin>>c;
        sign = (c== '+') ? pos : neg;
    }
    void showinfo() {
        cout << ( (sign==pos) ? "+" : "-" ) << endl;
        Distance::showinfo();
    }
};
int main() {
    Distance D1(30, 30);
    D1.showinfo();
    
    signShow S1(30, 40, pos);
    S1.showinfo();
    
    
}
