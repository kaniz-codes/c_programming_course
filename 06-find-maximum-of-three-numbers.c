#include<stdio.h>
int main()
{
 int A, B, C;
 printf("A= ");
 scanf("%d", &A);
 printf("B= ");
 scanf("%d", &B);
 printf("C= ");
 scanf("%d", &C);

 if(A>B && A>C)
 {
     printf("A is max");
 }
  else if(B>A && B>C)
 {
     printf("B is max");
 }
 else
 {
     printf("c is max");
 }
}
