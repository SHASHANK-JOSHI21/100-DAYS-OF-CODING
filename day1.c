//Q1: Write a program to input two numbers and display their sum.
//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
#include<math.h>
using namespace std;
int main(){
    int ageA;
    float ageB;
float m1=99.89 , m2=88;
    printf("total marks is =%f",m1+m2);
    printf("enter the ageA");
    scanf("%ds",&ageA);

    printf("enter the ageB");
    scanf("%f",&ageB);
    float sum,sub,multi,div;
    sum=ageA+ageB;
    printf("total sum of age is =%f\n",sum);
   sub=ageA-ageB;
   printf("the differnece between age is :%f\n",sub);
   multi=ageA*ageB;
   printf("the multiplication between two age is :%f\n",multi);
   div=(ageA/ageB);
   printf(" the division between two age is :%f\n",div);
      return 0;
}
