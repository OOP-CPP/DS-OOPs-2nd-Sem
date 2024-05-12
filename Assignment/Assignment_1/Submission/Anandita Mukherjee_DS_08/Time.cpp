#include<iostream>
using namespace std;
class time{
public:
int hour,min,sec;
time(int h=0,int m=0,int s=0){
    hour=h;
    min=m;
    sec=s;
}
void timeadd(int h,int m,int s){
    sec+=s;
    min+=m+sec/60;
    hour+=h+min/60;
    sec%=60;
    min%=60;
    hour%=24;
}
void display(){
    cout<<"time:"<<hour<<"hours"<<min<<"minutes"<<sec<<"seconds"<<endl;
}
};
int main(){
    time t1(3,45,30);
    cout<<"current time:"<<endl;
    t1.display();
    int addsec,addmin,addhrs;
    cout<<"enter additinal time to add:"<<endl;
    cout<<"hours:";
    cin>>addhrs;
    cout<<"minutes:";
    cin>>addmin;
    cout<<"seconds:";
    cin>>addsec;
    t1.timeadd(addhrs,addmin,addsec);
    cout<<"updated time:"<<endl;
    t1.display();
    return 0;

}