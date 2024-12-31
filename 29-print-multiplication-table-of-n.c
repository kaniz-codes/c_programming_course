// Print multiplication table of n
#include <stdio.h>
int main() 
{
   int i, m, n;
   scanf("%d", &n);
   for(i=1; i<=10; i++)
   {
       m=n*i;
       printf("\n%d x %d= %d",n,i,m);
   }
   
}
