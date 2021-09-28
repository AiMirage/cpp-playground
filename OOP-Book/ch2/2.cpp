#include <iostream>

using namespace std;

void PrintIntro();

int main(int argc, char const *argv[])
{
    int option;
    float temp;

    PrintIntro();
    cin >> option;
    cout << "\nEnter temprature: ";
    cin >> temp;

    switch (option)
    {
    case 1:
        cout << temp << " F = " << (5 * (temp - 32)) / 9 << " C";
        break;

    case 2:
        cout << temp << " C = " << ((9 * temp) / 5) + 32 << " F";
        break; 

    default:
        cout << "\nWrong Input";
        break;
    }

    return EXIT_SUCCESS;
}

void PrintIntro()
{
    cout << "\nPress:\n\t\"1\" for Fahr to Celisus\n\t\"2\" for Celisus to Fahr\n> ";
}
