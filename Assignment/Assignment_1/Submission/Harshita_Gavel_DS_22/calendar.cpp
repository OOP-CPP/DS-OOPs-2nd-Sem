#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void printCalendar(int year) {
    for (int month = 1; month <= 12; ++month) {
        //  THE NUMBER OF DAYS IN A MONTH
        int months_days;
        switch(month) {
            case 2:
                months_days = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                months_days = 30;
                break;
            default:
                months_days = 31;
        }

        // CALENDAR HEADER
        cout << "     " << year << " / " << setw(2) << setfill('0') << month << endl;
        cout << " Su  Mo  Tu  We  Th  Fr  Sa" << endl;

        //  THE DAY OF THE WEEK FOR THE FIRST DAY OF WEEK
        tm firstDayOfMonth = {0};
        firstDayOfMonth.tm_year = year - 1900;
        firstDayOfMonth.tm_mon = month - 1;
        firstDayOfMonth.tm_mday = 1;
        mktime(&firstDayOfMonth);

        int startingDayOfWeek = firstDayOfMonth.tm_wday;

        // THE SPACES FOR THE  FIRST WEEK
        for (int i = 0; i < startingDayOfWeek; ++i) {
            cout << "   ";
        }

        //DAYS OF MONTH
        for (int day = 1; day <= months_days; ++day) {
            cout << setw(3) << day;
            if ((day + startingDayOfWeek) % 7 == 0 || day == months_days) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int year ;
    cout<<"Enter the year:";
    cin>>year;
    
    printCalendar(year);
    return 0;
}