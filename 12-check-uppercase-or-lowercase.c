// Check uppercase or lowercase
#include <stdio.h>
int main()
{
 char c;
 printf("Enter a charecter: ");
 scanf("%c", &c);
 if(c>64 && c<91)
 { printf("Uppercase"); }
 else
 { printf("Lowercase"); }
}
