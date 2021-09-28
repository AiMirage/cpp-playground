#include <iostream>

using namespace std;

long hms_to_secs(int = 0, int = 0, int = 0);

int main(int argc, char const *argv[])
{
    int h, m, s;
    cout << "\nHours: ";
    cin >> h;
    cout << "\nMinutes: ";
    cin >> m;
    cout << "\nSeconds: ";
    cin >> s;
    cout << hms_to_secs(h, m, s);
    return EXIT_SUCCESS;
}

long hms_to_secs(int h, int m, int s)
{
    return (h * 60 * 60) + (m * 60) + s;
}
