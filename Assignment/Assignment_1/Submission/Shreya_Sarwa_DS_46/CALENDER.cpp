#include <iostream>
#include <string>

using namespace std;

class Month
{
public:
    string Name[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int Days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    void Output(int month)
    {
        if (month < 1 || month > 12)
        {
            cerr << "Invalid month number. Please enter a value between 1 and 12." << endl;
            return;
        }

        int day = Days[month - 1];
        cout << Name[month - 1] << " has " << day << " days." << endl;
    }
};

int main()
{
    Month m1;
    m1.Output(7);
    return 0;
}
