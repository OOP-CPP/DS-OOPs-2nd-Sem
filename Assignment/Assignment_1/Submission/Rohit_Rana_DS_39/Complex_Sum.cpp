#include <iostream>

using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex AddComplex(Complex num1, Complex num2) {
    Complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;
}

int main() {
    Complex num1, num2, sum;

    // Input the first complex number // 
    cout << "Enter real and imaginary parts of first complex number" << endl;
    cout << "Real part: ";
    cin >> num1.real;
    cout << "Imaginary part: ";
    cin >> num1.imag;

    // Input the second complex number //
    cout << "Enter real and imaginary parts of second complex number" << endl;
    cout << "Real part: ";
    cin >> num2.real;
    cout << "Imaginary part: ";
    cin >> num2.imag;

    // Add the complex numbers //
    sum = AddComplex(num1, num2);

    // Result //
    cout << "Sum is: " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}
