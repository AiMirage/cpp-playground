#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const float kGallonsInCubicFoot = 7.841;
    float gallons;
    while (true)
    {
        cout << "Number of Gallons: ";
        cin >> gallons;
        cout << gallons / kGallonsInCubicFoot << " Cubic Feet" << endl;
    }

    return 0;
}
