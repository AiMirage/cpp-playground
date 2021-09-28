#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter number: \n";
    cin >> n;
    for (int i = 1; i < 31; i++)
    {
        cout << setw(4) << right << n * i << "\t";
        if ((i % 10) == 0) cout << endl;
    }
    
    return EXIT_SUCCESS;
}
