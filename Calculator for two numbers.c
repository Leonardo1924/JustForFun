#include <stdio.h>
#include <math.h>

//double sum(); ()
void interface();
void sum(double * result);//(this is dumb but i need to learn how to use pointers)
void difference (double *result);
void multiplication (double * result);
void division (double * result);




int main()
{
 int opt;
 double result;
 printf("Welcome to your new Calculator\n");
 printf ("Please Choose an Option\n");
 interface();
 printf("Option:");
 scanf("%d",&opt);
 printf("\n");
 switch (opt)
 {
 case 1:
     //sum();
     sum(&result);
     printf("%3.2lf\n", result);
     break;

 case 2:
    difference(&result);
    printf("%3.2lf\n", result);
    break;

case 3:
    multiplication(&result);
    printf("%3.2lf\n", result);
    break;

case 4:
    division(&result);
    printf("%3.2lf\n",result);
    break;

case 5:
    printf("Nice you don't need me\n");
    break;
 
 default:
     break;
 }

}

void interface()
{
    puts(
     "1 -> Sum\n"
     "2 -> Difference\n"
     "3 -> Multiplication\n"
     "4 -> Division\n"
     "5 -> Exit\n"
 );
}

/*
double sum () //Did with pointer because i want to learn how to used that;
{
    double first,second,result;
    double *num1 , *num2;
    printf("Give me the first number:\n");
    scanf ("%lf",&first);
    printf ("Give me the second number:\n");
    scanf ("%lf",&second);
    num1 = &first;
    num2 = &second;
    result = *num1 + *num2;
    printf ("Result:%3.2lf \n", result);

}
*/

void sum (double * result) //((this is dumb but i need to learn how to use pointers) Same thing that double sum)
{

    double num1, num2;
    printf ("Give me the first number:\n");
    scanf ("%lf",&num1);
    printf ("Give me the second number:\n");
    scanf ("%lf",&num2);
    *result = num1 + num2;
}

void difference (double * result)
{

    double num1, num2;
    printf ("Give me the first number:\n");
    scanf ("%lf",&num1);
    printf ("Give me the second number:\n");
    scanf ("%lf",&num2);
    *result = num1 - num2;
}

void multiplication (double * result)
{
    double num1, num2;
    printf ("Give me the first number:\n");
    scanf ("%lf",&num1);
    printf ("Give me the second number:\n");
    scanf ("%lf",&num2);
    *result = num1 * num2;
}

void division (double * result)
{
     double num1, num2;
    printf ("Give me the first number:\n");
    scanf ("%lf",&num1);
    printf ("Give me the second number:\n");
    scanf ("%lf",&num2);
    *result = num1 / num2;
}