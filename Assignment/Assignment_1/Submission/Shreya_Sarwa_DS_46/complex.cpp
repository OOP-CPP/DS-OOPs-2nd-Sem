#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void Input(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void Sum(Complex c1, Complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }

    void Output()
    {
        cout << "Your Complex number is: " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    Complex m1;
    m1.Input(1, 2);
    m1.Output();

    return 0;
}
