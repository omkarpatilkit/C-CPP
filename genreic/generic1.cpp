#include <iostream>
using namespace std;

template <class T>
void Swap(T *iNo1, T *iNo2)
{
    T temp;
    temp = *iNo1;
    *iNo1 = *iNo2;
    *iNo2 = temp;
}

int main()
{

    int iValue1, iValue2;
    cout << "Enter value 1\n";
    scanf("%d", &iValue1);

    cout << "Enter value 2\n";
    scanf("%d", &iValue2);

    Swap(&iValue1, &iValue2);

    cout << "1st value is now " << iValue1 << endl;
    cout << "2nd value is now " << iValue2 << endl;
    return 0;
}