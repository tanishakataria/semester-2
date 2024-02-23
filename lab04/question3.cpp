#include<iostream>
#include<string>
using namespace std;

class weekdays {
private:
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int currentday;

public:
    weekdays() {
        currentday = 0;
    }

    weekdays(int current) {
        currentday = current % 7;
    }

    string getcurrentday() {
        return days[currentday];
    }

    string getnextday() {
        return days[(currentday + 1) % 7];
    }

    string getpreviousday() {
        return days[(currentday + 6) % 7];
    }

    string getnthdayfromtoday(int n) {
        return days[(currentday + n) % 7];
    }
};

int main() {
    weekdays week(2);
    cout << "current day: " << week.getcurrentday() << endl;
    cout << "next day: " << week.getnextday() << endl;
    cout << "previous day: " << week.getpreviousday() << endl;
    cout << "3rd day from today: " << week.getnthdayfromtoday(3) << endl;
    return 0;
}
