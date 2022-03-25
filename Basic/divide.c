// Program to divide two numbers
#include <stdio.h>



double divide( int a , int b){
if (a < b){
    return -1 ;
}
else{
    return a/b;
}

}

int main (){

int iVal1, iVal2;
double iRes;


printf("Please enter first value: \n" );
scanf("%d", &iVal1);

printf("Please enter second value: \n" );
scanf("%d", &iVal2);

iRes = divide(iVal1, iVal2);
if (iRes < 0)
{
    printf("Please enter valid number: \n" );

}

else{
    printf("the division is %lf", iRes);
}
    return 0;
}