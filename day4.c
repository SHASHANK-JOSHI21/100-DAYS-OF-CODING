//Q7: Write a program to swap two numbers using a third variable.
//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("ENter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("%d",i);
    sum=sum+i;
}
    printf("the sum is %d",sum);
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