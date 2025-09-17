Yashvesh Singh 24070123138
#include <iostream>
#include <cmath>
using namespace std;
class Complex{
    private:
    int real,imag;
    public:
    Complex(int r=0,int i=0){
        real =r;
        imag=i;
    }
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.imag =imag+obj.imag;
        return res;
    }
    void print(){
        cout<<real<<"+i"<<imag<<'\n';
    }
};
int main() {
   Complex c1(10,15),c2(22,4);
   Complex c3= c1+c2;
   c3.print();
}
Output:
32+i19
