#include <iostream>
using namespace std;

class Entry
{
public:
    char name[30];

    void accept()
    {
        scanf("%[^\n]", name);
    }
    void printname()
    {
        printf("%s", name);
        cout << '\n';
    }
};

class Date
{
public:
    int day;
    int month;
    int year;

    void SetDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void printDate()
    {
        cout << "Date is: " << day << '/' << month << '/' << year;
        cout << '\n';
    }

    int getDay()
    {
        return day;
    }
};

int main()
{
    int d1day, d2day;
    Entry E1;
    E1.accept();
    E1.printname();

    Date d1;
    d1.SetDate(2, 3, 21);
    d1.printDate();
    d1day = d1.getDay();
    cout << d1day << '\n';

    Date d2;
    d2.SetDate(3, 4, 21);
    d2.printDate();
    d2day = d2.getDay();
    cout << d2day << '\n';

    return 0;
}