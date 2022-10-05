class Car
{
private:
    int price;
    int fuel = 0;
    int passengers = 0;

public:
    Car()
    {
        cout << " Constructor" << endl;
    }

    void fillFuel()
    {
        fuel = 100;
    }

    void carStatus()
    {
        cout << "Fuel: " << fuel << "\n";
        cout << "Passengers: " << passengers << "\n";
    }
};