//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements
//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main(){
char ch;
printf("Enter the alphabet\n");
scanf("%c", &ch);
if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))
{
printf("The character is vowel\n");
}
else
{
printf("The character is consonant\n");
}
    int year;
printf("Enter the year\n");
scanf("%d",&year);
if((year%400==0)||(year % 4==0 && year % 100!=0))
{
printf("The year is leap year");
}
else
printf("the year is not a leap year");
return 0;
}