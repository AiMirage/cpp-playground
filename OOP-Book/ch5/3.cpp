#include <iostream>

using namespace std;

void zeroSmaller(int &, int &);

int main(int argc, char const *argv[])
{
    int x, y;

    do
    {
        cin >> x >> y;
        zeroSmaller(x, y);
        cout << "\nX: " << x << "\nY: " << y << endl;
    } while (x != '\r' || y != '\r');

    return EXIT_SUCCESS;
}

void zeroSmaller(int &x, int &y)
{
    if (x < y)
        x = 0;
    else
        y = 0;
}