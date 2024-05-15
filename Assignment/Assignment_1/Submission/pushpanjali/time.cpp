#include <iostream>
using namespace std;

void addTime(int h1, int m1, int s1, int h2, int m2, int s2) {
    int totalSeconds = s1 + s2;
    int carryMinutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    int totalMinutes = m1 + m2 + carryMinutes;
    int carryHours = totalMinutes / 60;
    int minutes = totalMinutes % 60;

    int hours = h1 + h2 + carryHours;

    cout << "Sum of times: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
}

int main() {
    int hour1, minute1, second1;
    int hour2, minute2, second2;

    cout << "Enter first time (hours minutes seconds): ";
    cin >> hour1 >> minute1 >> second1;

    cout << "Enter second time (hours minutes seconds): ";
    cin >> hour2 >> minute2 >> second2;

    addTime(hour1, minute1, second1, hour2, minute2, second2);

    return 0;
}