#include <stdio.h>
int main()
{
int A = 0;
int B = 0;
int C = 0;
int D = 0;
int E = 0;
int Sum = 0;
int Total = 500;
float Avg;
float Per;
printf("Marks obtained in English: \n");
scanf("%d",&A);
printf("Marks obtained in Maths: \n");
scanf("%d",&B);
printf("Marks obtained in Hindi: \n");
scanf("%d",&C);
printf("Marks obtained in Physics: \n");
scanf("%d",&D);
printf("Marks obtained in Chemistry: \n");
scanf("%d",&E);
Sum = A+B+C+D+E;
printf("Sum of Marks is: %d\n",Sum);
Avg = Sum/5;
printf("Average of Marks is: %.1f\n",Avg);
Per = Sum/5;
printf("Percentage is: %.2f\n",Per);
return 0;
}
