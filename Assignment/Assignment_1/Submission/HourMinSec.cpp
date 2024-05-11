#include <iostream>
using namespace std;

class  Sum{
      private:
      int h,m,s;
      public:
      void input(int hour,int min,int sec){
        h = hour;
        m =  min;
        s = sec;

       }
       void output(){
        cout<<"The time is :"<<h<<"hour "<<m<<" minute "<<s <<" second  "<<endl;
       }
       void total(){
        cout<<"The total time is :"<<h<<"hour "<<m<<" minute "<<s <<" second  "<<endl;
       }
       
       void add(Sum x,Sum y){
         s =  x.s + y.s ;
        
         m =  x.m + y.m +(s/60);
         s = s%60;

         h = x.h + y.h +(m/60) ;
         m = m % 60;

            }

};
int main(){
Sum a1,a2,a3;

a1.input(3,56,7);
a1.output();

a2.input(3,5,55);
a2.output();

a3.add(a1 , a2);
a3.total();

return 0;
}