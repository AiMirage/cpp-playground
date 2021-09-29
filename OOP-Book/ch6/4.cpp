#include <iostream>
#include <cctype>

using namespace std;

class Angle
{
private:
    int deg;
    float min;
    char dir;

public:
    Angle(){};

    Angle(int degrees, float minutes, char direction)
        : deg(degrees), min(minutes), dir(direction){};

    void Obtain(int deg, float minutes, char direction)
    {
        deg = deg;
        min = minutes;
        dir = direction;
    }

    void Display() const
    {
        cout << deg <<'\xF8' << min << "' " << dir << endl;
    }
};

int main(int argc, char const *argv[])
{
    Angle a(149, 32.5, 'w');
    a.Display();

    return EXIT_SUCCESS;
}
