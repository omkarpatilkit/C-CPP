#include <iostream>
#include <stdio.h>
using namespace std;

class Car
{

    char color[15];
    int cost;

public:
    Car()
    {
        cout << "This is a car" << '\n';
    }

    void Price()
    {

        cout << "Enter cost of car" << '\n';
        cin >> cost;
    }

    void colorOfCar()
    {
        cout << "Enter color of car" << '\n';
        cin >> color;
    }

    void Allinfo()
    {
        printf("%s ", color);
        cout << "Price is " << cost << '\n';
    }
};

int main()
{

    Car Audi;
    Audi.Price();
    Audi.colorOfCar();
    Audi.Allinfo();
    return 0;
}