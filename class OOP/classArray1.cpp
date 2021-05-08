#include <iostream>
#include <stdio.h>
using namespace std;

class Car
{
private:
    char color[15];
    int cost;

public:
    int p = 0;
    char c[15];
    Car()
    {
        cout << "This is a car" << '\n';
    }

    void Price()
    {

        cout << "Enter cost of car" << '\n';
        cin >> cost;
        p = cost;
    }

    void colorOfCar()
    {
        cout << "Enter color of car" << '\n';
        cin >> color;
        int i = 0;
        while (color[i] != '\0')
        {
            c[i] = color[i];
            i++;
        }
    }

    void Allinfo()
    {
        printf("%s ", color);
        cout << "Price is " << cost << '\n';
    }
};

class CarsInfo : public Car
{
public:
    void Allinfos()
    {
        printf("%s ", c);
        cout << "Price is " << p << '\n';
    }
};

int main()
{

    // Car Audi;
    // Audi.Price();
    // Audi.colorOfCar();
    CarsInfo A;
    A.Price();
    A.colorOfCar();
    A.Allinfos();
    return 0;
}