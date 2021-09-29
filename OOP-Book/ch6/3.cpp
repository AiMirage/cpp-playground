#include <iostream>

using namespace std;

class Time
{
private:
    unsigned int hour, min, sec;
    const char del = ':';

public:
    Time() : hour(0), min(0), sec(0){};
    Time(int h, int m, int s) : hour(h), min(m), sec(s){};

    void Display() const
    {
        cout << hour << del << min << del << sec << endl;
    }

    Time Add(const Time &t1, const Time &t2)
    {
        hour = t1.hour + t2.hour;
        int t = t1.min + t2.min;
        if (t >= 60)
        {
            hour++;
            min = t - 60;
        }
        else
        {
            min = t;
        }
        t = t1.sec + t2.sec;
        if (t >= 60)
        {
            min++;
            sec = t - 60;
        }
        else
        {
            sec = t;
        }
    }
};