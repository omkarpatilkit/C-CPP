// Accept one number and check whether is is divisible by 5 or not
#include <stdio.h>
#include <stdbool.h>

bool checkIsDivisible(int a ){
    if ( a % 5 ==0 ){
        return true;
    }
    else {return false;}
}


int main (){
    int iVal ;
bool isDivisible = false;

printf("Please enter a number: \n");
scanf("%d", &iVal);

isDivisible = checkIsDivisible(iVal);

if(isDivisible){
    printf("%d is divisible by 5.", iVal);
}
else{printf("%d is not divisible by 5.", iVal);}
    return 0;
    
}