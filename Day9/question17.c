//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,root1,root2;
    printf("Enter the value of a b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Roots are real and distinct\n");
        printf("Root1 = %.2f\n",root1);
        printf("Root2 = %.2f\n",root2);
    }
    else if(d==0)
    {
       root1=-b/(2*a);
       printf("Root are real and equal\n");
       printf("Root1 = Root2 = %.2f\n",root1); 
    }
    else{
        printf("Root are complex (imaginary)\n");
    }
    return 0;
}