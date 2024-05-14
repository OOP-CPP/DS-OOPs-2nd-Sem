#include <iostream>
#include <iomanip>

using namespace std;

// Function for giving spacing before dates
void spacing(int h)
{
    for (int i = 1; i <= h; i++)
    {
        cout << "    ";
    }
}

// Function for deciding the first day falling on a particular month 
int zellersCongruence(int month, int year)
{
    if (month < 3)
    {
        month += 12;
        year -= 1;
    }

    int K = year % 100; // Year of the century
    int J = year / 100; // Zero-based century

    int h = (1 + (13 * (month + 1)) / 5 + K + K / 4 + J / 4 - 2 * J) % 7 - 2;

    // Adjust h to fit ISO standard (Monday is 1, Sunday is 7)
    if (h < 0)
    {
        h += 7;
    }
    return h + 1;
}

// Check year whether it's a leap year or not
int all_year_check(int year)
{
    int leap;
    if (year % 400 == 0)
    {
        leap = 1;
        return leap;
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        leap = 1;
        return leap;
    }
    else
    {
        leap = 0;
        return leap;
    }
}

int month_name(int month)
{
    switch (month)
    {
    case 1:
        cout << "Jan";
        break;
    case 2:
        cout << "Feb";
        break;
    case 3:
        cout << "Mar";
        break;
    case 4:
        cout << "Apr";
        break;
    case 5:
        cout << "May";
        break;
    case 6:
        cout << "Jun";
        break;
    case 7:
        cout << "Jul";
        break;
    case 8:
        cout << "Aug";
        break;
    case 9:
        cout << "Sep";
        break;
    case 10:
        cout << "Oct";
        break;
    case 11:
        cout << "Nov";
        break;
    case 12:
        cout << "Dec";
        break;
    }
}

int main()
{
    // Declaring variables and taking inputs //
    int days, month, year;
    int h = 0;

    cout << "Enter the year: ";
    cin >> year;

    cout << "\n1.   January\n2.   February\n3.   March\n4.   April\n5.   May\n6.   June\n7.   July\n8.   August\n9.   September\n10.  October\n11.  November\n12.  December\n\nChoose the month: ";
    cin >> month;


    // Printing lines to make calender good looking
    cout << "---------------------------\n";
    cout << setw(12);
    month_name(month);
    cout << "," << year << "\n";
    cout << "---------------------------\n";
    cout << "S   M   T   W   T   F   S\n";
    cout << "---------------------------\n";

    // Calling the function to decide the first day on a particular month
    h = zellersCongruence(month, year);

    // Calling the function to align the dates under the days
    spacing(h);
    
    // Deciding the days according to months
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;

    case 2:
        if (all_year_check(year) == 1)
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;
    }

    // Printing the dates on the calendar
    for (int i = 1; i <= days; i++)
    {
        if (h == 7)
        {
            cout << "\n";
            h = 0;
        }

        if (i > 9)
        {
            cout << i << "  ";
        }
        if (i <= 9)
        {
            cout << i << "   ";
        }
        h++;
    }

    cout << "\n---------------------------\n";
    return 0;
}