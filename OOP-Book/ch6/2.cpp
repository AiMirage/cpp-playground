#include <iostream>

using namespace std;

class TollBooth
{
private:
    unsigned int cars;
    double cash;

public:
    TollBooth() : cars(0), cash(0){};

    void PayingCar();

    void NoPayCar();

    void Display() const;
};

void TollBooth::PayingCar()
{
    cars++;
    cash += 0.5;
}

void TollBooth::NoPayCar()
{
    cars++;
}

void TollBooth::Display() const
{
    cout << "\nCars: " << cars;
    cout << "\nTotal: " << cash;
}

int main(int argc, char const *argv[])
{
    TollBooth t;
    t.PayingCar();
    t.PayingCar();
    t.NoPayCar();
    t.Display();
    return EXIT_SUCCESS;
}
