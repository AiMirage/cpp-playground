#include <iostream>

using namespace std;

float power(float, int = 2);

int main(int argc, char const *argv[])
{
    cout << power(2,3) << endl;
    cout << power(2);
    return EXIT_SUCCESS;
}

float power(float n, int p)
{
    if (p == 1)
        return n;
    return n * power(n, p - 1);
}
