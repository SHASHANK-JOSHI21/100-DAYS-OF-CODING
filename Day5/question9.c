//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h>
int main(){
     float simple_interest,p,rate,t,compound;
    printf("enter the principal amount");
    scanf("%f",&p);
    printf("enter the time");
    scanf("%f",&t);
    printf("enter the rate");
    scanf("%f",&rate);
    simple_interest=p*rate*t/100;
    printf("THE simple interest is : %f\n",simple_interest);
    compound=p*pow(1+rate/100,t)-p;
    printf("The compond interest is %f\n",compound);
    return 0;
}