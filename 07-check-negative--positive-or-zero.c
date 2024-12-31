// Check negative, positive or zero
#include<stdio.h>
int main()
{
  int num;
  printf("Enter int number: ");
  scanf("%d", &num);
  if(num>0)
  {
      printf("Positive number");
  }
  else if(num<0)
  {
      printf("Negative number");
  }
  else
  {
      printf("Zero");
  }

}
