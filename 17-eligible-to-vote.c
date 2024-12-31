/* Write a C program to read the age of a candidate and determine
whether he is eligible to cast his/her own vote */
#include <stdio.h>
int main()
{
  int age;
  printf("Age= ");
  scanf("%d", &age);
  if(age>=18)
  {
      printf("Eligible to vote");
  }
  else
  {
      printf("Not eligible");
  }
}
