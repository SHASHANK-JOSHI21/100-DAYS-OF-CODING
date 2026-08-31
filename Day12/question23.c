//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>
int main(){   
    int day,fine;
    printf("Enter the number of  late days\n");
    scanf("%d",&day);
    if(day>=1 && day<=5)
    {
        fine=day*2;
        printf("You have to pay rupees %d as a fine\n",fine);
    }
    else if(day>=6 && day<=10)
    {
        fine=10+(day-5)*4;
        printf("You have to pay %d as a fine",fine);
    }
    else if(day>=11 && day<=30)
    {
        fine=30+(day-10)*6;
        printf("you have to pay %d as a fine",fine);
    }
    else if(day>30)
    {
        printf("Your membership cancelled");
    }
    else{
        printf("no fine");
    }
    return 0;
}