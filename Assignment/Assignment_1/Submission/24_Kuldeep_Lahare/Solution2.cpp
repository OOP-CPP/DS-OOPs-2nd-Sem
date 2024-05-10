#include<iostream>
using namespace std;

class Type{
    
    private:
    int hours;
    int minutes;
    int second;

    public:
    Type(int h=0, int m=0, int s=0)
    {
        hours = h;
        minutes = m;
        second = s;
    }
    Type operator + (Type const & obj)
    {
        Type res;
        res.second = second + obj.second;
        res.minutes = minutes + obj.minutes + obj.second/60;
        res.hours = hours + obj.hours + res.minutes/60;
        res.minutes %= 60;
        res.second %= 60;
        return res;
    }
    void display (){
        cout<<"Sum: "<<hours<<"Hours ,"<<minutes<<"Mintues ,"<<second<<"Second ,"<<endl;
    }
};
int main ()
{
    Type type1(4,8,12) , type2(5,10,15);
    Type sum = type1 + type2;
    sum.display();
    return 0;
}
