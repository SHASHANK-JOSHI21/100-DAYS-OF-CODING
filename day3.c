//Q5: Write a program to convert temperature from Celsius to Fahrenheit
//Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
#include<math.h>
int main(){
    float fahrenheit ,celsius;
    printf("Enter the celsius");
    scanf("%f",&celsius);
    fahrenheit=(celsius*(9.0/5.0)+32);
    printf("The temperature from celsius to fahrenhiet is: %.1f",fahrenheit);
    int a,b,c;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The value after swapping");
    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
    return 0;
}