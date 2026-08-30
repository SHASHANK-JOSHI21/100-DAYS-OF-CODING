//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled
//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit




#include<stdio.h>
int main(){
    int unit,bill;
    printf("Enter the unit consumed\n");
    scanf("%d",&unit);
    if(unit>=1 && unit<=100)
    {
        bill=unit*5;
        printf("Your bill is %d rupess\n",bill);
    }
    else if(unit>=101 && unit<=200)
    {
        bill=500+(unit-100)*7;
        printf("Your bill is %d rupees\n",bill);
    }
    else if(unit>=201 && unit<=300)
    {
        bill=1200+(unit-200)*10;
        printf("Your bill is %d rupees\n",bill);
    }
    else if(unit<300)
    {
        bill=2200+(unit-300)*12;
        printf("Your bill is %d rupees\n",bill);
    }
    else
    {
        printf("No due\n");
    }
   
   
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