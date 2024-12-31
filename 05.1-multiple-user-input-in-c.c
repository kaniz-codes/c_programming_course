// Multiple User Input In C 
#include <stdio.h>

int main() 
{
 int num;
 char sec;
 //ask user to input values
 printf("Enter your number and section: \n");
 //save user value
 scanf("%d %c", &num, &sec);
 //print the values
 printf("Your number is: %d\n", num);
 printf("Your section is: %c\n", sec);
    return 0;
}
