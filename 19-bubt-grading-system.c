// BUBT grading system
int main()
{
 float mark;
 printf("Enter mark: ");
 scanf("%f", &mark);
 if(mark>=90)
 {
     printf("A+ \nGrade: 4.00");
 }
 else if(mark>=87)
 {
     printf("A \nGrade: 3.70");
 }
 else if(mark>=80)
 {
     printf("A- \nGrade: 3.30");
 }
 else if(mark>=75)
 {
     printf("B+ \nGrade: 3.00");
 }
 else if(mark>=65)
 {
     printf("B \nGrade: 2.70");
 }
 else
 {
     printf("F");
 }
}

