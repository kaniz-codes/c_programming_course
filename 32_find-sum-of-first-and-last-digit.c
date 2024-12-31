//Find sum of first and last digit
#include<stdio.h>
int main()
{
    int i, n, x=0, sum=0;
    scanf("%d", &n);
    x=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    printf("First digit is: %d",n);
    printf("\nLast digit is: %d",x);
    sum= n+x;
    printf("\nSum of 1st and last digit if: %d", sum);
}
