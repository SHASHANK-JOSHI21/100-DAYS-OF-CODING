//Q21: Write a program to display the month name and number of days using switch-case for a given month number.
//Q22: Write a program to find profit or loss percentage given cost price and selling price.


#include<stdio.h>
int main(){
    int a;
    printf("Enter the number from (1-12) to display the month\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1 :
        printf("January 31 days\n");
        break;
        case 2 :
        printf("February 28 days leap year 29 days\n");
        break;
        case 3 :
        printf("March 31 days\n");
        break;
        case 4 :
        printf("April 30 days\n");
        break;;
        case 5 :
        printf("May 31 days\n");
        break;
        case 6 :
        printf("June 30 days\n");
        break;
        case 7 :
        printf("July 31 days\n");
        break;
        case 8 :
        printf("August 31 days\n");
        break;
        case 9 :
        printf("September 30 days\n");
        break;
        case 10 :
        printf("October 31 days\n");
        break;
        case 11 :
        printf("Novermber 30 days\n");
        break;
        case 12 :
        printf("December 31 days\n");
        break;
        }
        float  cp,sp,profit,loss,p,l;
        printf("Enter the cost price of the product\n");
        scanf("%f",&cp);
        printf("Enter the selling price of the product\n");
        scanf("%f",&sp);
        profit=sp-cp;
        loss=cp-sp;
        if(sp>cp)
        {
        p=(profit/cp)*100;
        printf("The profit is %f\n",profit);
        printf("The profit percentage is %f\n",p);
        }
        else if(cp>sp)
        {
        l=(loss/cp)*100;
        printf("The loss is %f\n",loss);
        printf("The loss percentage is %f",l);
        }
        else
        {
            printf("No profit no loss");
        }
        return 0;
}