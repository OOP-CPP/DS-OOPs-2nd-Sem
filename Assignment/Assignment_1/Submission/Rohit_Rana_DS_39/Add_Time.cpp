#include <iostream>

using namespace std;

void AddTime(int h1, int m1, int s1, int h2, int m2, int s2)
{

    int TotalSec = s1 + s2;
    int SEC = TotalSec % 60;

    int CarryMin = TotalSec / 60;

    int TotalMin = m1 + m2 + CarryMin;
    int MIN = TotalMin % 60;

    int CarryHrs = TotalMin / 60;

    int HRS = h1 + h2 + CarryHrs;
     
    // Condition to check if the sum of both times is exceedin to next day or not // 
    if (HRS > 23)
    {
        HRS = HRS - 24;
    }

    cout << "Sum of times: " << HRS << " hs, " << MIN << " ms, " << SEC << " ss" << endl;
}

int main()
{
    int h1, m1, s1;
    int h2, m2, s2;

    // Taking first time as input //
    cout << "Enter time:" << endl;
    cout << "Hours: ";
    cin >> h1;
    cout << "Minutes: ";
    cin >> m1;
    cout << "Seconds: ";
    cin >> s1;

    // Taking second time as input //
    cout << "Enter time to add:" << endl;
    cout << "Hours: ";
    cin >> h2;
    cout << "Minutes: ";
    cin >> m2;
    cout << "Seconds: ";
    cin >> s2;

    AddTime(h1, m1, s1, h2, m2, s2);

    return 0;
}