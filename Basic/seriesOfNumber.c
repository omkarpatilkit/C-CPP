// Program to print user input to 1 numbers on screen.

#include <stdio.h>

void printNumbers(int a ){

    for (int i = a ; i>0 ; i--){
        printf("%d ", i);
    }
}

int main (){



    int iVal; 
    printf("Please enter a number: \n");
    scanf ("%d", &iVal);

    printNumbers(iVal);
}