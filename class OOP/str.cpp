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
};

int main()
{
    Entry E1;
    E1.accept();
    E1.printname();

    Date d1;
    d1.SetDate(2, 3, 21);
    d1.printDate();
    return 0;
}