#include<iostream>
using namespace std;
class complex{
public:
int real,imaginary;
complex(int r=0,int i=0){
    real=r;
    imaginary=i;
}
complex add(complex c1,complex c2){
    complex b;
    b.real=c1.real+c2.real;
    b.imaginary=c1.imaginary+c2.imaginary;
    return b;
}
};
int main(){
    complex c1(3,4);
    cout<<"complex no.1:"<<c1.real<<"+i"<<c1.imaginary<<endl;
    complex c2(2,6);
    cout<<"complex no.2:"<<c2.real<<"+i"<<c2.imaginary<<endl;
    complex c3;
    c3=c3.add(c1,c2);
    cout<<"the sum:"<<c3.real<<"+i"<<c3.imaginary<<endl;
    return 0;

}