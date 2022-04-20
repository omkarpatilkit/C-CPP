#include <stdio.h>


int ageAsk(){

    int a;
    printf("Enter the age: \n");
    scanf("%d", &a);
    return a;
}
int main()
{

    char name[20] = "Omkar";
    int age = 0;
    // comment

    age = ageAsk();
    printf("Hello world \n");
    printf("this is written by %s, who is %d years old\n", name, age);

    return 0;
}