#include<stdio.h>
int main()
{
    int i, n, x=0,y=0;
    scanf("%d", &n);
    x= n%10;
    while (n >= 10)
        {n= n/10; }
    printf("last %d", x);
    printf("first %d", n);
}
