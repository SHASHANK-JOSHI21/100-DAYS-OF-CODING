//Q16: Write a program to input three numbers and find the largest among them using if–else.
//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("The character is upper case\n");
    else if (ch>='a' && ch<='z')
    printf("The character is lower case\n");
    else if(ch>='1' && ch<='9')
    printf("The character is number\n");
    else
    printf("The character is special digit\n");
    int num1,num2,num3;
    printf("Enter the number 1\n");
    scanf("%d",&num1);
    printf("Enter the number 2\n");
    scanf("%d",&num2);
   printf("Enter the number 3\n");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
    printf("The number %d is greater\n",num1);
    else if(num2>num1 && num2>num3)
    printf("The number 2 %d is greater\n",num2);
    else 
    printf("the number 3 %d is greater\n",num3);
    return 0;

}