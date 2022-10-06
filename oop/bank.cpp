#include <iostream>
using namespace std;
#include "saving.h"



int main(){

    Account a1("Omkar", 20000);
    a1.accStatus();

    Saving s1("OmkarPatil", 40000 , 8.1);
    s1.deposite(4500);
    s1.accStatus();
    
    return 0;
}