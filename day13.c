//Q26: Write a program to print numbers from 1 to n.
//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.




#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter cal\n");
    scanf(" %c",&op);
    switch(op)
    {
        case '+' :
        printf("%d\n",a+b);
        break;
        case '-' :
        printf("%d\n",a-b);
        break;
        case '*' :
        printf("%d\n",a*b);
        break;
        case '/' :
        printf("%d\n",a/b);
        break;
        case '%' :
        printf("%d\n",a%b);
        break;
    }

    int n,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf(" %d\n",i);
        return 0;
}