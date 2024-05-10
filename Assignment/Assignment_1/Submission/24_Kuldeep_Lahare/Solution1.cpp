
#include<iostream>
using namespace std;

class Complex {
    private: 
    float real;
    float imaginary;

    public:
    Complex(float r = 0, float i = 0)
    {
        real = r; 
        imaginary = i;
    }
    Complex operator + (Complex const & obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imaginary = imaginary + obj.imaginary;
        return res;
    }
    void display(){
        cout<<"Sum: "<<real<<"+"<<imaginary<<"i"<<endl;
    }
};
int main(){
    Complex num1(8,3), num2(7,2);
    Complex sum = num1 + num2;
    sum.display();
    return 0;
}
