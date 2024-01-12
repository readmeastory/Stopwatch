#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>

//made stopwatch program with lots of help from online since I barely knew anything about Sleep function but I now
//know more about it because of making this program.

using std::cout;
using std::cin;
using std::string;

void display_time(int minutes, int seconds, int miliseconds) {
    system("cls");
    cout << minutes << ':' << seconds << ':' << miliseconds << "\n";
}

int main()
{
    int minute = 0;
    int second = 59;
    int milisecond = 0;

    display_time(minute, second, milisecond);

    while (true) {
        //below it updates in miliseconds instead of seconds.
        Sleep(1);
        milisecond++;

        if (milisecond > 59) {
            second++;
            milisecond = 0;
        }

        if (second > 59) {
            minute++;
            second = 0;
            milisecond = 0;
        }
        display_time(minute, second, milisecond);
    }
    return 0;
}