// Check alphabet, digit or special character
#include<stdio.h>
int main()
{
 char A;
 printf("Input= ");
 scanf("%c", &A);


 if(A>=65 && 90>=A)
 {
     printf("Alphabet");
 }
  else if(A>97 && 122>A)
 {
     printf("Alphabet");
 }

   else if(A>48 && 57>A)
 {
     printf("Digit");
 }
 else
 {
     printf("Special character");
 }
 printf("\nKaniz 154\n");
}
