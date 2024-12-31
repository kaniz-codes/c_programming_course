//Find number of digits in a number
#include<stdio.h>
int main()
{
    int i,n,x=0;
    scanf("%d", &n);
    while(n!=0)
    {
        n=n/10;
        x++;
    }
    printf("The number of digit is %d",x);
}
