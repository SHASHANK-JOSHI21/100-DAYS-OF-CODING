//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num%2==0)
    printf("the number is even\n");
    else
    printf("The number is odd\n");
    if(num>=0)
    {
        if(num==0)
        printf("The number is zero\n");
        else
        printf("The num is positive\n");
    }
    else
    printf("The number is negative\n");
    return 0;
}