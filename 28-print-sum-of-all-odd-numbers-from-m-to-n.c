// Print sum of all odd numbers from m to n
#include <stdio.h>
int main() 
{
   int i, m, n, sum=0;
   scanf("%d", &m);
   scanf("%d", &n);
   for(i=m; i<=n; i++)
   {
       if(i%2==!0)
       {
           sum=sum+i;
       }
      
   }
    printf("Sum %d", sum);
}
