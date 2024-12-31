/* Accept two integers and check whether they are equal
or not */
#include <stdio.h>
int main()
{
  int A, B;
  printf("A= ");
  scanf("%d", &A);
  printf("B= ");
  scanf("%d", &B);
  if(A==B)
  {
      printf("Equal");
  }
  else
  {
      printf("Not equal");
  }
}
