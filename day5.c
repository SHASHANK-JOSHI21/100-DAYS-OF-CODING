//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format

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
    int totalsecond,hours,minutes,seconds;
    printf("Enter time in second");
    scanf("%d",&totalsecond);
    hours=totalsecond/3600;
    minutes=(totalsecond % 3600)/60;
    seconds=totalsecond % 60;
    printf("Time=%d hours,%d minutes,%d seconds\n",hours,minutes,seconds);
    return 0;
}