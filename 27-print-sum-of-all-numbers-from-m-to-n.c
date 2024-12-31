// Print sum of all numbers from m to n
#include <stdio.h>
int main() 
{
   int i,m ,n, sum=0;
   scanf("%d", &m);
   scanf("%d", &n);
   for(i=m; i<=n; i++)
   {
       sum=sum+i;
   }
   printf("\nSum= %d", sum);
}
