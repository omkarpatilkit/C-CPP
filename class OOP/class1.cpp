#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    int age;
    char *name;

public:
    void setAge(int Value, char *Name)
    {
        age = Value;
        name = Name;
    }

    void getAge()
    {
        printf("%s Age is %d ", name, age);
    }
};

int main()
{
    Human A;
    char name[10] = "Omkar";
    A.setAge(20, name);
    A.getAge();

    return 0;
}