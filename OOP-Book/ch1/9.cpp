#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c,d;
    char dummy;
    string msg[] = {
        "\nEnter first fraction: ",
        "\nEnter second fraction: "
    };

    cout << msg[0];
    cin >> a >> dummy >> b;
    cout << msg[1];
    cin >> c >> dummy >> d;

    cout << "\nSum: " << (a*d) + (b*c) << "/" << b*d << endl;

    return EXIT_SUCCESS;
}
