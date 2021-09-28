#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    const int kWidth = 16;
    cout.setf(ios::right);
    cout << 1991 << setw(kWidth) << "|" << right << setw(kWidth) << 12<< endl
         << 1991 << setw(kWidth) << "|" << right << setw(kWidth) << 760 << endl
         << 1991 << setw(kWidth) << "|" << right << setw(kWidth) << 12300 << endl
         << setw(4) << 1992 << setw(kWidth) << "|" << setw(kWidth) << 16200<< endl;

    return 0;
}
