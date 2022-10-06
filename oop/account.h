#include <string>
#include <iostream>
using namespace std;

class Account
{

protected:
    float balance;
    string name;
    int acc_no; 
    // static int sr;

public:
    Account(string name, float balance)
    {
        this->name = name;
        this->balance = balance;
        // sr++;
        
    }
    ~Account() {};
    string getNmae() const { return this->name; }
    float getBalance() const { return this->balance; }
    int getAccNo() const { return this->acc_no; }
    void accStatus() const {cout << "Acc holder: " << this->name << " Balance: " << this->balance << endl;}

    void deposite(float amt) { this->balance = this->balance + amt; }
    void withdraw(float amt)
    {
        if (this->balance >= amt)
            this->balance = this->balance - amt;

        else
            cout << "Insufficient funds";
    }
};