#include <iostream>
using namespace std;
#include <string>
#include "account.h"

class Saving : public Account
{
private:
    float rate;

public:
    Saving(string name, float balance, float rate) : Account(name, balance)
    {
        this->rate = rate;
    }
    ~Saving() {}

    void accStatus() const { cout << "Acc holder: " << this->name << " Balance: " << this->balance << " Interest rate: " << this->rate << endl; }
};
