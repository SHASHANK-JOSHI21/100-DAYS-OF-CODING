//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int main(){
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