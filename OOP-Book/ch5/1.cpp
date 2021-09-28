#include <iostream>

using namespace std;

const float kPI = 3.14f;

struct Circle
{
    double diameter;
};

double CircArea(const Circle&);


int main(int argc, char const *argv[])
{
    Circle c;
    cout << "\nDiameter: ";
    cin >> c.diameter;
    cout << CircArea(c) << endl;
    return EXIT_SUCCESS;
}

double CircArea(const Circle& c) {
    return kPI * c.diameter * c.diameter / 4;
}
