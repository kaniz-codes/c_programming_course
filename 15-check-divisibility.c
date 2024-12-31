// Check divisibility
#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if(num%5==0 && num%11==0)
  {
      printf("Divisible");
  }
  else
  {
      printf("Not divisible");
  }
}
