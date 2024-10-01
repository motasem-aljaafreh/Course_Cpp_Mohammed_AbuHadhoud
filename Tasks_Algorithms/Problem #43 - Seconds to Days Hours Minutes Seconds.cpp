#include <iostream>
using namespace std;

int main() {
    
    unsigned int TotalOfSeconds;

    cout << "Enter the number of seconds: ";
    cin >> TotalOfSeconds;

    int seconds_per_minutes = 60; // 60 total seconds in 1 minute
    int seconds_per_hour = 3600; // 60 * 60 = 3600 total seconds in 1 hour
    int seconds_per_day = 86400; // 60 * 60 * 24 total seconds in 1 day
    
    unsigned int days = TotalOfSeconds / seconds_per_day;
    TotalOfSeconds %= seconds_per_day;

    unsigned int hours = TotalOfSeconds / seconds_per_hour;
    TotalOfSeconds %= seconds_per_hour;

    unsigned int minutes = TotalOfSeconds / seconds_per_minutes;
    unsigned int seconds = TotalOfSeconds % seconds_per_minutes;

    
    // Output the result
    cout << "Equivalent time: " << "\n"
        << days << " days" << "\n"
        << hours << " hours" << "\n"
        << minutes << " minutes" << "\n"
        << seconds << " seconds" << endl;

    return 0;
}