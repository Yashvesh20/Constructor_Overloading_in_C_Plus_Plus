Yashvesh Singh 24070123138
#include <iostream>
using namespace std;

class Complex {
private:
    int real,imag;
public:
    Complex(int r = 0, int i = 0):real(r),imag(i) {}

    Complex operator*(const Complex& obj) {
        int r=real*obj.real-imag*obj.imag;
        int i=real*obj.imag+imag*obj.real;
        return Complex(r,i);
    }

    void print() {
        cout<<real<<"+i"<<imag<<endl;
    }
};

int main() {
    Complex c1(4,3),c2(6,5);
    Complex c3 = c1*c2;
    c3.print();
}
Output:
9+i38
